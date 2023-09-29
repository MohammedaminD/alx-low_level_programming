#include "main.h"

/**
 * get_endianness- a function that check for endianness meaningg
 * the order in which bytes are arranged in a multi-byte
 * data type like integers or floating-point numbers written in binary
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
