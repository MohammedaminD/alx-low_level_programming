#include <stdio.h>
/**
  *main - entry point
  *
  *Return: always 0 (success)
  */
int main(void)
{
	int m;
	int R = 1;

	while (R < 11)
	{
		for (m = 97; m < 123; m++)
		{
			putchar(m);
		}
		R++;
		putchar('\n');
	}
	return (0);
}
