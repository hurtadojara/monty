#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv) 
{
    size_t line_size = 0;
    int read = 0, arg = 0;
    unsigned int linea = 0;
    FILE *fd;
    char **strings = NULL, *token, *line = NULL;
    void (*operation)(stack_t **, unsigned int);
    stack_t **nodo = NULL;
    unsigned int i = 0;

    if (argc == 2)
    {
        fd = fopen(argv[1], "r");

        if (!fd)
            printf("couln't open the file");
    }
    else
        return (1);
    strings = malloc(sizeof((char *)100));
    if (!strings)
        return (-1);
    read = getline(&line, &line_size, fd);
    while (read > 0)
    {
        linea++;
        token = strtok(line, " \n");
        for (; token != NULL; token = strtok(NULL, " \n"))
        {
            strings[arg] = strdup(token);
            printf("%s\n", strings[arg]);
            arg++;
        }
        operation = unificador(strings, linea);
        operation(nodo, i);
        read = getline(&line, &line_size, fd);
    }
    return (0);
}
