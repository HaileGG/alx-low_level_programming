#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatnates all arguments of program.
 * @ac: argument count.
 * @av: point to pointer to arguments
 * Return: pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, n, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		size += j + 1;
	}
	str = malloc(size + 1);
	if (str == 0)
		return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	return (str);
}
