#include "main.h"

/**
 * main - this is the main function.
 * @argc: this is an integer.
 * @argv: is a character.
 * @environ: this is the global variable.
 * Return: should return 0.
 */

int main(int argc, char **argv, char **environ)
{
	char *line = NULL;
	char *delim = "\t \a\n";
	char *command;
	char **tokens;
	(void)argc;

	tokens = find_path(environ);

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		line = read_line();
		argv = splits(line, delim);
		command = args_path(argv, tokens);
		if (command == NULL)
			execute(argv);
		free(line);
		free(argv);
		free(command);
	}
	return (0);
}
