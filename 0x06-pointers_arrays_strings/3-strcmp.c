#include "main.h"

/**
 * _strcmp - compare two string.
 * @s1: string.
 * @s2: strcmp.
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	char *str1 = s1;
	char *str2 = s2;

	while (((*str1 != '\0') && (*str2 != '\0')) && (*str1 == *str2))
	{
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
