#include "main.h"
/**
  * _isdigit - function that checks for a digits from 0-9
  *  Return: 1 if c is a digit, 0 if else
  * @c : integer
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
