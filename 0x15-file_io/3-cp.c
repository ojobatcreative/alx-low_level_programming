#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
* print_error_and_exit - Print an error message and exit with a given code
* @code: Exit code
* @message: Error message
*/

void print_error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error : %s\n", message);
	exit(code);
}

/**
* main - Program starts here
* @argc: Argument count
* @argv: Argument Vector
* Return: Exit code
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error_and_exit(97, "Usage : cp file_from file_to");
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int file_des_from = open(file_from, O_RDONLY);
	if (file_des_from == -1)
	{
		print_error_and_exit(98, strerror(errno));
	}

	int file_des_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_des_to == -1)
	{
		print_error_and_exit(99, strerror(errno));
	}


	char buffer[BUFFER_SIZE];
	ssize_t read_byte, written_byte;

	while ((read_byte = read(file_des_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_byte = write(file_des_to, buffer, read_byte);
		if (written_byte == -1)
		{
			print_error_and_exit(99, strerror(errno));
		}
	}

	if (read_byte == -1)
	{
		print_error_and_exit(98, strerror(errno));
	}

	if (close(file_des_from) == -1)
	{
		print_error_and_exit(100, strerror(errno));
	}

	if (close(file_des_to) == -1)
	{
		print_error_and_exit(100, strerror(errno));
	}

	return (0);
}
