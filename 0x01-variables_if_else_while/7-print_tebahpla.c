#include <stdio.h>
/**
  * main - Entry point
  *program that prints the lowercase alphabet in reverse.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int m;

	for (m = 122; m > 96; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
