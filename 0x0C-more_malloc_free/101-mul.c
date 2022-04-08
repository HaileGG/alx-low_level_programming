#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _print - Moves a string one place to the left and prints the string.
 * @str: string to move.
 * @l: size of string.
 *
 * Return: void.
 */
void _print(char *str, int l)
{
	int i = 0, j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			putchar(str[i]);
	}
	putchar('\n');
	free(str);
}

/**
 * *mul - Multiplies a char with a string and places the answer into dest.
 * @n: char to multiply.
 * @num: string to multiply.
 * num_ix: last non NULL index of num.
 * @dest: destination of multiplication.
 * dest_ix: hieghest index to start addition.
 *
 * Return: pointer to dest, or NULL on failure.
 */
char *mul(char n, char *num, int num_ix, char *dest, int dest_ix)
{
	int j, k, mul, mulr = 0, add, addr = 0;

	for (j = num_ix, k = dest_ix; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulr;
		mulr = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addr;
		addr = add /10;
		dest[k] = add % 10 + '0';
	}
	for (addr += mulr; k >= 0 && addr; k--)
	{
		add = (dest[k] - '0' + addr);
		addr = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addr)
	{
		return (NULL);
	}
	return (NULL);
}

/**
 * init - initializes a string.
 * @str: string to inialize.
 * @l: length of string.
 *
 * Return: void.
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
	{
		str[i] = '0';
	}
	str[i] = '\0';
}

/**
 * main - multiply two numbers.
 * @argc: number of arguments.
 * @argv: argument vector.
 *
 * Return: Zero, or exit status.
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a, *t;
	char err[] = "Error\n";

	if (argc != 3 || isdigit(argv))
	{
		for (ti = 0; err[ti]; ti++)
		{
			putchar(err[ti]);
		}
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
	{
		;
	}
	for (l2 = 0; argv[2][l2]; l2++)
	{
		;
	}
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; err[ti]; ti++)
		{
			putchar(err[ti]);
		}
		free(a);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; err[ti]; ti++)
			{
				putchar(err[ti]);
			}
			free(a);
			exit(98);
		}
	}

	_print(a, ln - 1);
	return (0);
}
/**
 * _isNumber - checks the given number.
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
	{
		p[i] = '0';
	}
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
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		printf("0\n");
	       	exit(0);
	}
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
