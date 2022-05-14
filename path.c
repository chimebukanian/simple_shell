#include "main.h"

/**
 * find_path - the function that finds the path.
 * @environ: the global variable environ.
 * Return: the path in tokens.
 */

char **find_path(char **environ)
{
	char *get_path, **tokens, *delim;

	delim = ":";
	get_path = _getenv(environ, "PATH");
	tokens = splits(get_path, delim);
	return (tokens);
}
