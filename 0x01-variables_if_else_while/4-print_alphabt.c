#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alpha = 'a';
	/* loop that prints all letters except q and e */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha == 'e' || alpha == 'q')
	{
	continue;
	}
	putchar(alpha);
	}
	putchar('\n');

	return (0);
}
