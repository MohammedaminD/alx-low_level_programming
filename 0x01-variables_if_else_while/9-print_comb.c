#include <stdio.h>
/**
  * main - Entry point
  *program to print all possible combinations of single-digit numbers
  * Return: Always 0 (Success)
  */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
		if (m != 57)
		{
		/* this loop execludes number 9, so the program ends without space or comma*/
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
