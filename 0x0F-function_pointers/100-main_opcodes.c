#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - ....
 * @argc: ....
 * @argv: ....
 *
 * Return: ....
 */
int main(int argc, char *argv[])
{
	ud_t ud_j;
	int v = 0, i = 0;

	if (argc == 2)
	{
		v = atoi(argv[1]);

		if (v < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_j);
		ud_set_input_buffer(&ud_j, argv[1], v);
		ud_set_mode(&ud_j, 64);
		ud_set_syntax(&ud_j, UN_SYN_INTEL);

		while (ud_disassemble(&ud_j))
		{
			printf("\t%s\n", ud_insn_hex(&ud_j));
		}
	}
	return (0);
}
