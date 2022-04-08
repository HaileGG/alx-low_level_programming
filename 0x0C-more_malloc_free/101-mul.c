#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiply two numbers as agruments.
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: 0 Seccess.
 */
 
int main(int argc, char *argv[])
{
	unsigned int mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1] * atol(argv[2]));
	printf("%lu\n", mul);

	return (0);
}
/**
 * _isNumber - checke the given number.
 * @s: a string.
 * Return: pointer.
 */
/**
int _isNumber(char *s)
{
	int i, c, d;

	d = 0, c = 1;
	for (i = 0; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			c = 0;
			break;
		}
	}
	return (c);
}
**/
/**
 * _callocx - chacks malloc
 * @nm: long integer.
 * Return: pointer.
 */
/**
char *_callocx(unsigned int nm)
{
	unsigned int i;
	char *p;

	p = malloc(nm + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < nm; i++)
		p[i] = '0';
	p[i] = '\0';
	return (p);
}
**/
/**
 * main - getting the args.
 * @argc: args.
 * @argv: arg array.
 * Return: 0.
 */
/**
int main(int argc, char **argv)
{
	int i, j, l1, l2, lfl, ml, ad, tn, tn2, tl, zr = 0;
	char *rs;

	if (argc != 3 || _isNumber(argv[1]) == 0 || _isNumber(argv[2]) == 0)
		printf("Error\n"), exit(98);
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
		printf("0\n"), exit(0);
	l1 = strlen(argv[1]), l2 = strlen(argv[2]);
	lfl = l1 + l2;
	rs = _callocx(lfl);
	if (rs == 0)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = l2 - 1; i >= 0; i--)
	{
		tn = 0; tn2 = 0;
		for (j = l1 - 1; j >= 0; j--)
		{
			tl = i + j + 1;
			ml = (argv[1][j] - '0') * (argv[1][i] - '0') + tn;
			tn = ml / 10;
			ad = (rs[tl] - '0') + (ml % 10) + tn2;
			tn2 = ad / 10;
			rs[tl] = (ad % 10) + '0';
		}
		rs[tl - 1] = (tn + tn2) + '0';
	}
	if (rs[0] == '0')
		zr = 1;
	for (; zr < lfl; zr++)
	{
		printf("%c", rs[zr]);
	}
	printf("\n");
	free(rs);
	return (0);
}
**/
