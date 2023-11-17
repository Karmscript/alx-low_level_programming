#include "main.h"

/**
  * _islower - checks for lowercase characters
  * @c: variable that is used to determine if input is lowercase
  * main - employs built in function
  * Return: 1 if successful and 0 if unsuccessful
  */
int _islower(int c)
{
	/* if and else loops are used to check for lowercase input */
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

