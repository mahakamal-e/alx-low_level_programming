#include "main.h"
#include <elf.h>
/**
 * print_elf_magic - print numbers of rlf header
 * @header_: header sturct
 */
void print_elf_magic(Elf64_Ehdr header_)
{
	int iterat;
	printf("  Magic:   ");
	for (iterat = 0; iterat < EI_NIDENT; iterat++)
	{
		printf("%02x", header_.e_ident[iterat]);
		if (iterat == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * main - check code
 * @argc: list of arguments
 * @argv: value of arg
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_, iterat = 0;
	Elf64_Ehdr header_;
	ssize_t bytes_number;

	if (argc != 2)
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31),  exit(98);
	file_ = open(argv[1], O_RDONLY);
	if (file_ == -1)
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]), exit(98);
	bytes_number = read(file_, &header_, sizeof(Elf64_Ehdr));
	if (bytes_number == -1)
		write(STDERR_FILENO, "Error: Can't read from file\n", 28), exit(98);
	for (iterat = 0; iterat < 4; iterat++)
	{
		if (header_.e_ident[0] == 0x7f &&
				header_.e_ident[1] == 'E' &&
				header_.e_ident[2] == 'L' &&
				header_.e_ident[3] == 'F')
		{
			printf("ELF Header:\n");
		}
		else
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);
		}
	}
	print_elf_magic(header_);
	return (0);
}
