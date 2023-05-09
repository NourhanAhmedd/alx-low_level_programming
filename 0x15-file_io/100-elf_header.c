#include "main.h"
#include <elf.h>
void p_o_m(Elf64_Ehdr h);
/**
 * p_m - Write a function that returns the ELF magic.
 * @h: The elf header.
*/
void p_m(Elf64_Ehdr h)
{
	int index;

	printf("  Magic:   ");
	/* For loop: */
	for (index = 0; index < EI_NIDENT; index++)
		printf("%2.2x%s", h.e_ident[index], index == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * p_c - Write a function that returns the ELF class.
 * @h: The elf header.
*/
void p_c(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	/* Switch: */
	switch (h.e_ident[EI_CLASS])
	{
		/* Case 1: */
		case ELFCLASS64:
			printf("ELF64");
		break;
		/* Case 2: */
		case ELFCLASS32:
			printf("ELF32");
		break;
		/* Case 3: */
		case ELFCLASSNONE:
			printf("none");
		break;
	}

	printf("\n");
}
/**
 * p_d - Write a function that returns the ELF data.
 * @h: The elf header.
*/
void p_d(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	/* Switch: */
	switch (h.e_ident[EI_DATA])
	{
		/* Case 1: */
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		/* Case 2: */
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		/* Case 3: */
		case ELFDATANONE:
			printf("none");
		break;
	}

	printf("\n");
}
/**
 * p_v - Write a function that returns the ELF version.
 * @h: The elf header.
*/
void p_v(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	/* Switch: */
	switch (h.e_ident[EI_VERSION])
	{
		/* Case 1: */
		case EV_CURRENT:
			printf(" (current)");
		break;
		/* Case 2: */
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}

	printf("\n");
}
/**
 * p_o - Write a function that returns the ELF osabi.
 * @h: The elf header.
*/
void p_o(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	/* Switch: */
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			p_o_m(h);
			break;
	}

	printf("\n");
}
/**
 * p_o_m - Write a function that returns the ELF osabi.
 * @h: The elf header.
*/
void p_o_m(Elf64_Ehdr h)
{
	/* Switch: */
	switch (h.e_ident[EI_OSABI])
	{
		/* Case 1: */
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		/* Case 2: */
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		/* Case 3: */
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		/* Case 4: */
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		/* default: */
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * p_a  - Write a function that returns the ELF ABI.
 * @h: The elf header.
*/
void p_a(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
		h.e_ident[EI_ABIVERSION]);
}
/**
 * p_t - Write a function that returns the ELF type.
 * @h: The elf header.
*/
void p_t(Elf64_Ehdr h)
{
	int index;
	char *s = (char *)&h.e_type;

	index = 0;
	printf("  Type:                              ");
	/* If condition: */
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		index = 1;
	/* Switch: */
	switch (s[index])
	{
		/* Case 1: */
		case ET_NONE:
			printf("NONE (None)");
			break;
		/* Case 2: */
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		/* Case 3: */
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		/* Case 4: */
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		/* Case 5: */
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		/* default: */
		default:
			printf("<unknown>: %x", s[index]);
		break;
	}

	printf("\n");
}
/**
 * p_e - Write a function that returns the ELF address.
 * @h: The elf header.
*/
void p_e(Elf64_Ehdr h)
{
	int index;
	int lth;
	unsigned char *s = (unsigned char *)&h.e_entry;

	index = 0
	lth = 0;
	printf("  Entry point address:               0x");
	/* If condition: */
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		index = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!s[index])
		{
			index--;
		}
		printf("%x", s[index--]);
		for (; index >= 0; index--)
		{
			printf("%02x", s[index]);
		}
		printf("\n");
	}
	else
	{
		index = 0;
		lth = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!s[index])
		{
			index++;
		}
		printf("%x", s[index++]);
		for (; index <= lth; index++)
		{
			printf("%02x", s[index]);
		}
		printf("\n");
	}
}
/**
 * main - Write a program that displays the information contained in
 * the ELF header at the start of an ELF file.
 * @argc: The Arg Count.
 * @argv: The Arg Vector.
 * Return: It will return (EXIT_SUCCESS).
*/
int main(int argc, char **argv)
{
	Elf64_Ehdr e;
	int f_n;
	ssize_t b_s;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	f_n = open(argv[1], O_RDONLY);
	if (f_n == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	b_s = read(f_n, &h, sizeof(h));
	if (b_s < 1 || b_s != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]);
		exit(98);
	}
	p_m(h);
	p_c(h);
	p_d(h);
	p_v(h);
	p_o(h);
	p_a(h);
	p_t(h);
	p_e(h);
	if (close(f_n))
	{
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", f_n);
		exit(98);
	}
	return (EXIT_SUCCESS);
}
