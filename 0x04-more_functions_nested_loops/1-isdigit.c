#include "main.h"

/**
  * _isdigit - is a discription of a function
  *
  * @c: is a char
  * Return: integer
  */
int _isdigit(int c)
{
if ((c >= 48 && c <= 59) || (c >= 0 && c <= 9))
return (1);
else
return (0);
}
