#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 16);
    printf("%s\n", concat);
    free(concat);
    concat = string_nconcat("Best ", NULL, 6);
    printf("%s\n", concat);
    free(concat);
    concat = string_nconcat(NULL, "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    concat = string_nconcat(NULL, NULL, 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
