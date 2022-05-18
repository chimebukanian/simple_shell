#include "main.h"

/**
 * length - a function that checks the = char.
 * @str: a character.
 * Return: a str.
 */

char *length(char *str)
{
	int i;

	for (i = 0; str[i] != '='; i++)
		;
	return (str + i + 1);
}

/**
 * compare - a function that compares two strings.
 * @varname: is a character.
 * @dirname: a character.
 * Return: 1
 */

int compare(char *varname, char *dirname)
{
	int i;

	for (i = 0; dirname[i] != '\0'; i++)
	{
		if (dirname[i] != varname[i])
			return (0);
	}
	return (1);
}

/**
 * get_env - the function that gets the path.
 * @environ: the global variable.
 * @dirname: is a character.
 * Return: should return final or null.
 */

char *get_env(char **environ, char *dirname)
{
	int k, j;
	char *varname, *final;

	for (j = 0; environ[j]; j++)
	{
		varname = malloc(1024);

		for (k = 0; environ[j][k] != '='; k++)
			varname[k] = environ[j][k];

		if (compare(varname, dirname))
		{
			final = length(environ[j]);
			free(varname);
			return (final);

		}
		free(varname);
	}
	return (NULL);
}
