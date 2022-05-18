#ifndef _GATEOFSHELL_H_
#define _GATEOFSHELL_H_

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/* shell basic process */
int main(int argc, char *argv[], char *env[]);


void built_in(char *string, char **argv, char **env, int *ex_it);


void sighandler(int sig);
void simple_print_shell(char *string);


void forkwaitexec(int status, char **argv, int *count, int *stad_exit);
void print_count(int *count);
int _putchar(char c);


int func_ctrl_d(char *string, ssize_t read, int *stad_exit);


int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);


char *_memcpy(char *dest, char *Src, unsigned int n);


char **_parser(char *string);


int _path(char *args, char **argv, char **env, int *stad_exit);
char *print_path(char *der, char *args);


int printenv(char **env, int *stad_exit);
void print_string(char *string);


char *read_command(char **env);


void rm_new_line(char *string);


int shell_loop(char **env);


char **split_command(char *string);


#endif
