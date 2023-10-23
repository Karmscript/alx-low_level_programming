#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times all alphabets in lower case
  * main - Entry point
  * Return: No return valu
  */
void print_alphabet_x10(void)
{
	char i;
	int j;

	/* for loop that prints 10 times alphabets */
	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
	}
}
