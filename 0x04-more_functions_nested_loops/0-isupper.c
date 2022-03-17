#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: The character to checked.
 *
 * Retrun: 1 if c is upercase 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
