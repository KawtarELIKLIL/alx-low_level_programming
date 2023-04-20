#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*op_add - sum of a and b
*@a: first num
*@b: second num
*Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - sub of a and b
*@a: first num
*@b: second num
*Return: sub of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - mul of a and b
*@a: first num
*@b: second num
*Return: mul of a and b
*/
int op_mul(int a, int b)
{
	return (a + b);
}

/**
*op_div - div of a and b
*@a: first num
*@b: second num
*Return: div of a and b
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
*op_mod - mod of a and b
*@a: first num
*@b: second num
*Return: mod of a and b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		exit(100);
		printf("Error\n");
	}
	return (a % b);
}
