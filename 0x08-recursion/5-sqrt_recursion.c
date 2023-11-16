#include "main.h"

/**
  * helper_func - evaluates the square root of n using recursion
  * @n: number whose square root is to be returned
  * @i: square root of n
  * Return: required square root
  */
int helper_func(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (helper_func(n, i + 1));
	}
	return (-1);
}

/**
  * _sqrt_recursion - returns the natural square root of n
  * @n: integer whose square root is to be returned
  * Return: square root of number
  */
int _sqrt_recursion(int n)
{
	return (helper_func(n, 0));
}
