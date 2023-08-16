#include "main.h"
/**
   * _islower -  a function that checks for lowercase character
    * @c: an integer variable
     * Return:  1 if c is lowercase, 0 otherwise
      */
int _islower(int c)
{

	if (c >= 97 && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
