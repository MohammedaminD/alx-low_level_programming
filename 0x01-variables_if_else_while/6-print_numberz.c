#include <stdio.h>
/**
  * main - Entry point
  *prints all single digit numbers of base 10 starting from 0
  *no char variables allowed
  * Return: Always 0 (Success)
  */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
