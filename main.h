#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <limits.h>
#include <stdarg.h>

#define INREACT_MODE 1
#define NON_INTERACT_PIPE 2
#define NON_INTERACT_FILE 3
#define STR_SIZE 256

extern char **environ;

int shell_mode(int ac);
void non_interact_file(char *av[]);
void non_interact_pipe(void);
char **_read_lines(void);
char **get_token(char *s, char *d);
int is_builtin(char **f);
char *_getenv(char *path_name);
char **tok_path(char *env_path);
char *_strcat(char *dest, char *src);
char *_is_exist(char *program_name);
int execute(char **f);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int countStringOccurrences(char *s, char *d);
char *_strtok(char *str, const char *delim);
char *_strdup(char *str);
char *_strstr(char *haystack, char *needle);
char *_strchr(char *s, char c);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char *_fgets(char *string, int n, FILE *s);
void _free(int count, ...);
void env(void);
void free_3(char **f);
void free_2(int k, char **s);

#endif
