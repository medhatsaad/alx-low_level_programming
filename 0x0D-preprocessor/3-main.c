#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;
    int k;
    int y;
	   ;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    k = ABS(0) * 10;
    y = ABS('a') * 10;
    printf("%d, %d, %d ,%d\n", i, j, k, y);
    return (0);
}
