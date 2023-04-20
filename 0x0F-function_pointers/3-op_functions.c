# include <stdio.h>
# include "3-calc.h"

/**
 * op_add - add 2 numbers
 * @a: number
 * @b: number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 numbers
 * @a: number
 * @b: number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: number
 * @b: number
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: number
 * @b: number
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: number
 * @b: number
 *
 * Return: moduluo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
