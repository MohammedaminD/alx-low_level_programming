#include <stdio.h>
/**
  * main - Entry point
  *program that prints the alphabet in lowercase, followed by a new line.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int m;

	for (m = 97; m < 123; m++)
	{
		if (m != 101 && m != 113)
		{
			putchar(m);
		}
	}
	putchar('\n');
	return (0);
}
