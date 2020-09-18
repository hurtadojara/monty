#include "monty.h"
/**
  * eraser - fuction to free.
  */
struct var_global global_t;
void eraser(void)
{
	int i = 1, j = 0;

	while (global_t.strings[i] != NULL)
	{
		i++;
	}
	while (j < i)
	{
		free(global_t.strings[j]);
		global_t.strings[j] = NULL;
		j++;
	}
	free(global_t.strings);
}
