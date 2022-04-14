#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Check the program that calvulator 2 numbers.
 * @argc: the number of arguments.
 * @argv: the parameter of the case number.
 *
 * Return: 0 in Success.
 */
int main(int argc, char *argv[])
{
	int n1, n2, re;
	int (*oprt)(int, int);
	
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	oprt = get_op_func(argv[2]);

	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	re = oprt(n1, n2);

/**
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == '0')
	{
		printf("Error\n");
		exit(100);
	}

	re = oprt(atoi(argv[1]), atoi(argv[3]));
**/
	printf("%d\n", re);
	return (0);
}
