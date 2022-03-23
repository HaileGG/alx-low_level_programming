#include "main.h"

/**
 * rot13 - encode a atring with rot13.
 * @s: the string.
 * Return: rot
 */
char *rot13(char *s)
{
	int j = 0;
	char *rot = s;
	char rotv1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotv2[] = "NOPQRSTUWXYZABCDEFGHIJKLMnopqrstuwxyzabcdefghijklmn";

	while (*rot)
	{
		for (j = 0; rotv1[j]; j++)
		{
			if (*rot == rotv1[j])
			{
				*rot = rotv2[j];
				break;
			}
		}
		rot++;
	}
	return (s);

}
