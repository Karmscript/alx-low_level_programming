#include "main.h"

/**
  * helper_func - helps to determines if an input integer is a prime number
  * @i: helps to determine if n is prime
  * @n: integer whose primality is to be checked
  * Return: 1 if number is prime, and 0 if it is not
  */
int helper_func(int n, int i)
{
	if (n == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (helper_func(n, i - 1));
}

/**
  * is_prime_number - determines if an input is prime
  * @n: number whose primality is to be tested
  * Return: 1 if number is prime and 0 if it is not
  */
int is_prime_number(int n)
{
	return (helper_func(n, n - 1));
}
