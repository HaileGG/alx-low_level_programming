#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by str.
 * @dest: destination of the string.
 * @src: source of the string.
 * Return: string.
 */
char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *str++;
		*dest = 0;
	}
	return (guard);
}
