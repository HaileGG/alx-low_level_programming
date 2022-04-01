#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints one argument for minimum coin count.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int array[] = {25, 10, 5, 2, 1};
	int i, cn;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cn = atoi(argv[1]);
	if (cn < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		if (cn >= array[i])
		count += (cn / array[i]);
		cn = cn % array[i];
	
		if (cn == 0)
		{
			printf("%d\n", count);
			break;
		}
	}
	return (0);
}
