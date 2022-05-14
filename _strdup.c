#include "main.h"

/**
 *_strdup - this duplicate a string.
 *@str: a pointer.
 *Return: pointer to array.
 */

char *_strdup(char *str)
{
	char *new;
	int i;

	if (str == NULL)
		return (NULL);

	new = malloc(_strlen(str) + 1);

	if (new == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}

	new[i] = '\0';

	return (new);
}
