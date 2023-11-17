#include "main.h"

/**
  * _strlen_check - gets the length of the string
  * @s: string to be counted
  * Return: length of the string
  */
int _strlen_check(char *s)
{
	if (*s)
		return (1 + _strlen_check(s + 1));
	return (0);
}

/**
  * helper_func - helps to determine if a string is a palindrome
  * @string: string to be checked for palindromicity
  * @length: length of the string
  * @counter: counter of string
  * Return: 1 if string is a palindrome and 0 if it is not
  */
int helper_func(char *string, int counter, int length)
{
	if (counter >= length)
	{
		return (1);
	}
	if (string[counter] == string[length])
		return (helper_func(string, counter + 1, length - 1));
	return (0);
}

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string to be checked
  * Return: 1 if string is a palindrome and 0 if it is not
  */
int is_palindrome(char *s)
{
	int length =  _strlen_check(s);
	int counter = 0;

	return (helper_func(s, counter, length - 1));
}
