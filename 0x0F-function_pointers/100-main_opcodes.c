#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - program that prints the opcodes of its own main function.
 * @n: number of bytes to print
 *
 * Return: Nothing.
 */
/**
void print_opcodes(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
**/
/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;
	char *m = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (n--)
	{
		printf("%02x%c", *m++ & 0xff, n ? ' ' : '\n');
	}
	return (0);
}
