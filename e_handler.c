#include "monty.h"

void e_handler(int error)
{
    if (error == 1)
    {
        fprintf(stderr, "L%d: can't swap, stack too short", global_t.n_linea);
        exit (EXIT_FAILURE);
    }
    else if (error == 2)
    {
        fprintf(stderr, "L%d: instruction %s", global_t.n_linea, global_t.strings[0]);
        exit(EXIT_FAILURE);
    }
    else if (error == 3)
    {
        fprintf(stderr, "L%d: usage: push integer", global_t.n_linea);
    }
    else if (error == 4)
    {
        fprintf(stderr, "L%d: can't pint, stack empty", global_t.n_linea);
        exit (EXIT_FAILURE);
    }
    else if (error == 5)
    {
        fprintf(stderr, "L%d: can't pop an empty stack", global_t.n_linea);
        exit (EXIT_FAILURE);
    }
    else if (error == 0)
    {
        fprintf(stderr, "USAGE: monty file\n");
    }
    else if (error == 6)
    {
        fprintf(stderr, "L%d:can't add, stack too short", global_t.n_linea);
        exit (EXIT_FAILURE);
    }

}