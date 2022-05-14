#include "main.h"

/**
 *_puts -this prints a string.
 *@str: is a char.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
