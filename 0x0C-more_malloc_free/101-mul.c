#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *
 *
 */
int _isnumber(char *s)
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
/**
 *
 *
 */
char *_callocx(unsigned int nm)
{
	unsigned int i;
	char *p;

	p = malloac(nm + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < nm; i++)
		p[i] = '0';
	p[i] = '\0';
	return (p);
}
/**
 *
 *
 */
int main(int argc, char **argv)
{
	int i, j, l1, l2, lfl, ml, ad, tn, tn2, tl, zr = 0;
	char *rs;

	if (argc != 3 || _isnumber(argv[1]) == 0 || _isnumber(argv[2]) == 0)
		printf("Error\n"), exit(98);
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
		printf("0\n"), exit(0);
	l1 = strlen(argv[1]), l2 = strlen(argv[2]);
	lfl = l1 + l2;
	rs = _callocx(lfl);
	if (rs == 0)
		printf("Error\n"), exit(98);
	for (i = l2 - 1; i >= 0; i--)
	{
		tn = 0; tn2 = 0;
		for (j = l1 - 1; j >= 0; j--)
		{
			t1 = i + j + 1;
			ml = (argv[1][j] - '0') * (argv[1][i] - '0') + tn;
			tn = ml / 10;
			ad = (rs[t1] - '0') + (ml % 10) + tn2;
			tn2 = ad / 10;
			rs[t1] = (add % 10) + '0';
		}
		rs[t1 - 1] = (tn + tn2) + '0';
	}
	if (rs[0] == '0')
		zr = 1;
	for (; zr < lfl; zr++)
		printf("%C", rs[zr]);
	printf("\n");
	free(rs);
	return (0);
}
/**
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Finds the length of string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */
/**
int find_len(char *str)
{
	int ln = 0;

	while (*str++)
		ln++;

	return (ln);
}
**/
/**
 * create_xarray - Creates an array of orders of chars.
 * @size: The size of the array to be initialized.
 * @desc: the functions exits.
 * Return: A pointer to the array.
 */
/**
char *create_xarray(int size)
{
	char *arr;
	int in;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);

	for (in = 0; in < (size - 1); in++)
		arr[in] = 'x';

	arr[in] = '\0';

	return (arr);
}
**/
/**
 * iterate_zeroes - Iterates through a string of numbers.
 * @str: The string of numbers to be iterate through.
 * Return: A pointer to the next non-zero elements.
 */
/**
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}
**/
/**
 * get_digit - Converts a digit character to a corres int.
 * @c: The character to be converted.
 * Desc: C is a digit.
 * Return: The converted int.
 */
/**
int get_digit(char c)
{
	int dig = c - '0';

	if (dig < 0 || dig > 0)
	{
		printf("Error\n");
		exit(98);
	}

	return (dig);
}
**/
/**
 * get_prod - Muliple a string of numbers.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The singlr digit.
 * @zeroes: The neccesary number of leading zeroes.
 * @Desc: mult contains a non-digit.
 * Return: void.
 */
/**
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mu_ln, nu, tn = 0;

	mu_ln = find_len(mult) - 1;
	mult += mu_ln;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mu_ln >= 0; mu_ln--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '0')
		{
			printf("Error\n");
			exit(98);
		}

		nu = (*mult - '0') * digit;
		nu += tn;
		*prod = (nu % 10) + '0';
		tn = nu / 10;
	}
	if (tn)
		*prod = (tn % 10) + '0';
}
**/
/**
 * add_nums - Adds the numbers stored in two strings.
 * @final_prod: The buffer storing the numbering.
 * @next_prod: The next product to added.
 * @next_len: The length of next_prod.
 * Return: Sum.
 */
/**
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int nu, tn = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		nu = (*final_prod - '0') + (*next_prod - '0');
		nu += tn;
		*final_prod = (nu % 10) + '0';
		tn = nu / 10;

		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		nu = (*next_prod - '0');
		nu += tn;
		*final_prod = (nu % 10) + '0';
		tn = nu % 10;

		final_prod--;
		next_prod--;
	}

	if (tn)
		*final_prod = (tn % 10) + '0';
}
**/
/**
 * main - Multiplies two positive numbers.
 * @argv: The number of argument passed.
 * @argc: An array of pointers.
 * Desc: the function exits with a status.
 * Return: Always 0.
 */
/**
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, ix, dgt, zer = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (ix = find_len(argv[2]) - 1; ix >= 0;ix--)
	{
		dgt = get_digit(*(argv[1] + ix));
		get_prod(next_prod, argv[1], dgt, zer++);
		add_nums(final_prod, next_prod, size - 1);
	}

	for (ix = 0; final_prod[ix]; ix++)
	{
		if (final_prod[ix] != 'x')
			putchar(final_prod[ix]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
	**/
}
