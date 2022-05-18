#include "main.h"

/**
 * reallocate - reallocate memory.
 * @ptr: void variable pointer.
 * @old_size: int.
 * @new_size: an integer.
 * Return: Null.
 */

void *reallocate(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new;
	unsigned int i;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		new[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new);
}

/**
 * split - the function that create tokens.
 * @line: a char.
 * @delim: is a character.
 * Return: double pointer.
 */

char **split(char *line, char *delim)
{
	char **pptoken;
	int buf = 1024, i = 0;

	pptoken = malloc(sizeof(char *) * buf);
	if (!pptoken)
		exit(99);

	pptoken[i] = strtok(line, delim);
	i++;
	while (1)
	{
		pptoken[i] = strtok(NULL, delim);
		if (i >= buf)
		{
			buf += buf;
			pptoken = reallocate(pptoken, buf, buf * (sizeof(char *)));
			if (!pptoken)
				exit(98);
		}
		if (pptoken[i] == NULL)
			break;
		i++;
	}
	return (pptoken);
}
