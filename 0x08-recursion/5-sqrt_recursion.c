#include "main.h"

/**
  * helper_func - assists in computing the square root of input
  * @n: number whose natural square root is to be determined
  * @i: square root of n
  * Return: natural square root of n ( -1, if n has no natural square root)
  */
int helper_func(int n, int i)
{
	if (i * i > n)
	{
	return (-1);
	}
	if (i * i == n)
	{
	return (i);
	}
	return (helper_func(n, i + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of n
  * @n: input whose natural square root is to be determined
  * Return: natural square root
  */
int _sqrt_recursion(int n)
{
	return (helper_func(n, 0));
}
