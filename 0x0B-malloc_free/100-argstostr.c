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
	int i, j, k = 0, et = 0;
	char *p = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			et++;
	}

	p = (char *)malloc(et + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
