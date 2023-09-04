#include <stdio.h>
/**
 * main - a function that prints a program's name
 * @argc: argument count
 * @argv: argument elements(value)
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
