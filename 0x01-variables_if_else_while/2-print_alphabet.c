#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alphabet = 'a';

	/* loop that prints all the lower case alphabets from a to z */
	while (alphabet <= 'z')
{
		putchar(alphabet);

		alphabet++;
}
	putchar('\n');

	return (0);
}
