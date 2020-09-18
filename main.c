#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;

int main(int argc, char **argv)
{
	FILE *fd;
	stack_t *nodo;
	global_t.nodo = NULL, global_t.strings = NULL;

	if (argc == 2)
	{
		fd = fopen(argv[1], "r");
		global_t.fd = fd;
		if (!fd)
		{
			printf("Error: Can't open file %s\n", argv[0]);
			fclose(fd);
			exit(EXIT_FAILURE);
		}
	}
	else
		e_handler(0);
	getlinetok(fd);
	nodo = global_t.nodo;
	while (nodo != NULL)
	{
		nodo = nodo->next;
		free(global_t.nodo);
		global_t.nodo = nodo;
	}
	fclose(fd);
	return (1);
}
