#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern struct var_global global_t;

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;
	(void) line_number;
    
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
