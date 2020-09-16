#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void (*unificador(char **strings, unsigned int linea))(stack_t **, unsigned int)
{
    (void)linea;

    instruction_t functions[] = {
        //{"pall", pall},
        {"push", push},
        {NULL, NULL}
    };

    int i = 0;

    while (i < 2)
    {
        if (strcmp(functions[i].opcode, strings[0]) == 0)
        {
            return (functions[i].f);
        }
        i++;
    }
    return (NULL);

}