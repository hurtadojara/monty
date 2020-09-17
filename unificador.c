#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;

void (*unificador(void))(stack_t **, unsigned int)
{
    instruction_t functions[] = {
        {"pall", pall},
        {"push", push},
        {"pint", pint},
        {"pop", pop},
        {"swap", swap},
        {"add", add},
        {"nop", nop},
        {NULL, NULL}
    };
    int i = 0;
    while (i < 6)
    {
        if (strcmp(functions[i].opcode, global_t.strings[0]) == 0)
        {
            return (functions[i].f);
        }
        i++;
    }
    return (NULL);

}