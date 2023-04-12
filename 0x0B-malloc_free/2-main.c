#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;
    printf("start\n");
    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
    }
    printf("%s\n", s);
    printf("start\n");
    s = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
    }
    else 
    	printf("%s\n", s);
    printf("start\n");
    s = str_concat("Betty ", NULL);
    if (s == NULL)
    {
        printf("failed\n");
    }
    printf("%s\n", s);



    printf("start\n");
    s = str_concat(NULL, "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
    }
    printf("%s\n", s);

        

    free(s);
    return (0);
}
