#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int m;
	int M;

	for (m = 97; m < 123; m++)
	{
		putchar(m);
	}
	for (M = 65; M < 91; M++)
	{
		putchar(M);
	}
	putchar('\n');
	return (0);
}
