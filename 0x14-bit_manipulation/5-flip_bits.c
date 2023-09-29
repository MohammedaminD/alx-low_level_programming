#include "main.h"

/**
  * flip_bits - Returns the number of bits needed to flip to get
  * from one number to another.
  * @n: First input number.
  * @m: Second input number.
  *
  * Return: The number of bits needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned long int bits = n ^ m;
		unsigned int count = 0;

		while (bits)
		{
			count += bits & 1;
			bits >>= 1;
		}

		return (count);
}
