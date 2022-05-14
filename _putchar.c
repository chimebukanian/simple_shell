#include <unistd.h>

/**
 * _putchar -this  writes the character c to stdout.
 * @c: The character to print,
 *
 * Return: 1 if successful
 * Or -1 if it fails.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
