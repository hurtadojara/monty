#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;

int main(int argc, char **argv)
{

	FILE *fd;
	global_t.nodo = NULL, global_t.strings = NULL;

	if (argc == 2)
	{
		fd = fopen(argv[1], "r");
		if (!fd)
		{
			printf("Error: Can't open file %s\n", argv[0]);
			exit(EXIT_FAILURE);
		}
	}
	else // PRINT USAGE ERROR
		return (1);
	global_t.strings = malloc(sizeof(char *) * 100);
	if (!global_t.strings)
	{
		exit(EXIT_FAILURE);
	}
	getlinetok(fd);
	return (1);

}
