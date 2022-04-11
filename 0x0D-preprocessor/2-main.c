#include <stdio.h>
#include <stdlib.h>
#ifndef _MAIN_C_

/**
 * main - Prints the file name of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	#ifndef NAME_H

	printf("%s\n", __BASE_FILE__);
	return (0);

	#endif /*NAME_H */
}
