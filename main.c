#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;

int main(int argc, char **argv) 
{
    size_t line_size = 0;
    int read = 0, arg = 0;
    FILE *fd;
    char *token, *line = NULL;
    void (*operation)(stack_t **, unsigned int);
    global_t.nodo = NULL, global_t.strings = NULL;


    if (argc == 2)
    {
        fd = fopen(argv[1], "r");

        if (!fd)
            printf("couln't open the file");
    }
    else
        return (1);
    global_t.strings = malloc(sizeof(char *) * 100);
    if (!global_t.strings)
        return (-1);
    read = getline(&line, &line_size, fd);
    while (read > 0)
    {
        token = strtok(line, " \n\t\r\a");
        for (; token != NULL; token = strtok(NULL, " \n\t\r\a"))
        {
            global_t.strings[arg] = strdup(token);
            arg++;
        }
        arg = 0;
        global_t.n_linea++;
        operation = unificador(global_t.strings, global_t.n_linea);
        operation(&global_t.nodo, global_t.n_linea);
        read = getline(&line, &line_size, fd);
    }
    return (0);
}
