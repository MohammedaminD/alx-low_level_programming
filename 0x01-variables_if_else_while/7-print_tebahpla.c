#include <stdio.h>
/**
  * main - Entry point
  *program that prints the alphabet in lowercase, followed by a new line.
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
