#include "GATEOFSHELL.h"

/**
 * _memcpy - copies the memory area
 * @dest: memory area dest
 * @src: memory area src
 * @n: Copies n bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
