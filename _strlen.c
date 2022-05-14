#include "main.h"

/**
 *_strlen - this returns the length of a string.
 *@s: a char.
 * Return: 0.
 */

unsigned int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}
