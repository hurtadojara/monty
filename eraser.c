#include "monty.h"
struct var_global global_t;

void eraser(void)
{
    int i = 0, j = 0;

    while (global_t.strings[i] != NULL)
    {
        i++;
    }
    while (j <= i)
    {
        free(global_t.strings[j]);
        j++;
    }
    free(global_t.strings);
}