#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_error_and_exit - Prints an error message and exits the program.
 * @error_message: The error message to display.
 *
 * Description: Prints the error message to stderr and exits with code 98.
 */

void print_error_and_exit(const char *error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(98);
}

/**
 * print_magic - Prints the ELF magic numbers from e_ident.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Description: Prints the magic numbers in a formatted way.
 */

void print_magic(unsigned char *e_ident)
{
	printf(" Magic:");
	for (int i = 0; i < EI_NIDENT; i++)
	{
	printf(" %02x", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class_and_data - Prints ELF class and data encoding.
 * @e_ident: Pointer to an array containing ELF class and data encoding info.
 *
 * Description: Prints the ELF class (32-bit or 64-bit) and data encoding.
 */

void print_class_and_data(unsigned char *e_ident)
{
	printf(" Class: ");
	printf(e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32\n" : "ELF64\n");

	printf(" Data: ");
	printf(e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian\n" :
						"2's complement, big endian\n");
}

/**
 * print_version_and_abi - Prints ELF version and OS/ABI information.
 * @e_ident: Pointer to an array containing ELF version and OS/ABI info.
 *
 * Description: Prints the ELF version and OS/ABI information.
 */

void print_version_and_abi(unsigned char *e_ident)
{
	printf(" Version: %d\n", e_ident[EI_VERSION]);

	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
	default:
	printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	break;
	}
}

/**
 * print_type_and_entry - Prints ELF type and entry point address.
 * @e_type: The ELF type.
 * @e_entry: The entry point address.
 * @e_ident: Pointer to an array containing ELF class and data encoding info.
 *
 * Description: Prints the ELF type and entry point address.
 */
void print_type_and_entry(unsigned int e_type, unsigned long int e_entry,
						unsigned char *e_ident)
{
	printf(" Type: ");
	switch (e_type)
	{
	default:
	printf("<unknown: %x>\n", e_type);
	break;
	}

	printf(" Entry point address: ");
	printf(e_ident[EI_CLASS] == ELFCLASS32 ? "%#x\n" : "%#lx\n", e_entry);

	return (0);
}

