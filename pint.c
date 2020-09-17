#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern struct var_global global_t;

void pint(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;
    
	if (tmp == NULL)
	{
		printf("error");
        printf("%d", line_number);
	}
    printf("%d\n", tmp->n);
}