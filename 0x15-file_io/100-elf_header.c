#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - Entry point to the program
 * @argc: The number of arguments
 * @argv: array of pointers to strings
 */

int main(int argc, char *argv[])
{
	int fd;
	ssize_t read_status;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	read_status = read(fd, &header, sizeof(header));
	if (read_status < 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		exit(98);
	}

	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %d\n", header.e_ident[EI_OSABI]);
	printf("Type:                              %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" : "DYN (Shared object file)");
	printf("Entry point address:               0x%lx\n", header.e_entry);

	if (close(fd) < 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
		exit(98);
	}

	return (0);
}
