#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the sum of a, and b
 * @a: first int
 * @b: 2nd int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the subtraction of a, and b
 * @a: 1st int
 * @b: 2nd int
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication of a, and b
 * @a: 1st int
 * @b: 2nd int
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return a over b
 * @a: 1st int
 * @b: 2nd int
 * Return: result, or 0 if b = 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the reminder of a over b
 * @a: 1st int
 * @b: 2nd int
 * Return: result, or -1 if b = 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
