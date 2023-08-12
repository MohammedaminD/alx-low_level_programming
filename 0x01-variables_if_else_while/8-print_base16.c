#include <stdio.h>
/**
  * main - Entry point
  * a program that prints all the numbers of base 16 in lowercase
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		/*this loop prints from 0-9 */
	{
		putchar(n);
	}
	for (n = 97; n < 103; n++)
		/*this loop prints from a-f */
	{
		putchar(n);
	}
	putchar('\n');
	return (0);

}
