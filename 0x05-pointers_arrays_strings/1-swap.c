#include "main.h"

/**
  * swap_int - is a function
  * @a: is a variable
  * @b: is a variable
  * Rerurn: void
  */
void swap_int(int *a, int *b)
{
int x;
x = *b;
*b = *a;
*a = x;
}
