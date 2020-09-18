#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;
/**
  * main - entry point.
  * @argc: argc.
  * @argv: argv.
  * Return: 1.
  */
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
			printf("Error: Can't open file %s\n", argv[1]);
			fclose(fd);
			exit(EXIT_FAILURE);
		}
	}
	else
		e_handler2(0);
	getlinetok(fd);
	nodo = global_t.nodo;
	while (nodo != NULL)
	{
		nodo = nodo->next;
		free(global_t.nodo);
		global_t.nodo = nodo;
	}
	fclose(fd);
	free(global_t.linea);
	exit(EXIT_SUCCESS);
}
