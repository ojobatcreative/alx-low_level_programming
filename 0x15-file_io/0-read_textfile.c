#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * ... standard output.
 * @filename: The file to be read
 * @letters: The number of letters to read and print.
 *
 * Return: The anumber of letters printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_count = 0;
	char *buffer;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_count = fread(buffer, sizeof(char), letters, file);

	if (read_count < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	ssize_t write_count = write(STDOUT_FILENO, buffer, read_count);

	if (write_count != read_count)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (read_count);
}
