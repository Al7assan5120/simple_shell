#include "main.h"

char** _read_lines()
{
    char str[STR_SIZE];
    char** lines = NULL;
    char** temp;
    char* line;
    int i = 0;
    int j;

    while(_fgets(str, sizeof(str), stdin) != NULL)
    {
        line = malloc(_strlen(str) + 1);
        if (line == NULL) {

            perror("Failed to allocate memory\n");
            return NULL;
        }
        _strcpy(line, str);
        temp = malloc((i + 2) * sizeof(char*));
        if (temp == NULL) 
        {
            perror("Failed to allocate memory for lines\n");
            free(line);
            return NULL;
        }
        for (j = 0; j < i; j++)
        {
            temp[j] = lines[j];
        }
        free(lines);
        lines = temp;
        lines[i] = line;
        i++;
    }
    lines[i] = NULL;
    return lines;
}
