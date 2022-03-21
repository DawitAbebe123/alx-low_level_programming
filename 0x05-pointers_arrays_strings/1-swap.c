#include<stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: value tobe evaluate
 * Return value to be evaluate.
 * Return: not.
 *
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
