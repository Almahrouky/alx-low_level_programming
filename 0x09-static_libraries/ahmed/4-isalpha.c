#include "main.h"

/**
 * _isalpha - This is a description
 * @c: This is an integer the user input
 *
 * Return: 1 if alpha else return 0
 */
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
