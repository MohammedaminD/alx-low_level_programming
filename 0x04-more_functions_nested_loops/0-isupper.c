#include "main.h"
/**
  * _isupper - function that checks for upper case characters
  *
  * Return: 1 for upper case, 0 if not
  */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return(1);

	}
	else
	{
		return(0);
	}

}
