#include <stdio.h>

/**
  * main - Entry point of function
  * @argc: argument counter
  * @argv: the arguments to passed
  * Return: always 0 (Success)
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
