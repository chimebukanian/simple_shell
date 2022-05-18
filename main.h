#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>
char *readline(void);
char **split(char *line, char *delim);
int exec(char **parse);
void _puts(char *str);
int _putchar(char c);
unsigned int _strlen(char *s);
char **find_path(char **environ);
char *get_env(char **environ, char *dirname);
char *arg_path(char **parse, char **tokens);
char *_strdup(char *str);
char *if_exists(char **environ);
extern char **environ;
#endif
