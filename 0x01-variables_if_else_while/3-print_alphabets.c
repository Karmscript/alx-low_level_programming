#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char l_alphabet = 'a';

	char u_alphabet = 'A';
	/* statements that prints lower and upper case alphabets*/
	while (l_alphabet <= 'z')
	{
	putchar(l_alphabet);

	l_alphabet++;
	}
	while (u_alphabet <= 'Z')
	{
	putchar(u_alphabet);

	u_alphabet++;
	}
	putchar('\n');
	return (0);
}
