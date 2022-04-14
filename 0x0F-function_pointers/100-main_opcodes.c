#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - program that prints the opcodes of its own main function.
 * @a: address of the main function.
 * @n: number of bytes to print
 *
 * Return: Nothing.
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02x", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int e;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	e = atoi(argv[1]);
	if (e < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, e);

	return (0);
}
