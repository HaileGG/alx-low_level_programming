#include "main.h"

/**
 * cap_string - captaliza all words in string.
 * @s: string.
 * Return: address of s.
 */
char *cap_string(char *s)
{
	int j, ch;
	int i = 1;
	char a[] = {32, '\t', '\n', 44, ';', ',', 46, '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] -= 32;
	}

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			i = 0;
			ch = 0;
			
			while (ch == 0  && j < 13)
			{
				if (s[i - 1] == a[j])
				{
					ch = 1;
				}
				j++;
			}

			if (ch == 1)
			{
				s[i] -= 32;
			}
		}
		i++;
	}

	return (s);
}
