#include <stdio.h>
/**
  * main - Entry point
  * program to print all possible different combinations of two digits
  * Return: Always 0 (Success)
  */
int main(void)
{
	int m;
	int n;

	for (m = 48; m < 58; m++)
	{
	/* this loop feeds the first digit */
		for (n = 48; n < 58; n++)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
