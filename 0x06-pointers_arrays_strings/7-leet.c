#include "main.h"

/**
 * leet - is a function
 * @s: is a char pointer
 * Return: pointer char
 */
char *leet(char *s)
{
int i, j;
char arr[21];
arr[0] = 'a';
arr[1] = '4';
arr[2] = 'A';
arr[3] = '4';
arr[4] = 'e';
arr[5] = '3';
arr[6] = 'E';
arr[7] = '3';
arr[8] = 'o';
arr[9] = '0';
arr[10] = 'O';
arr[11] = '0';
arr[12] = 't';
arr[13] = '7';
arr[14] = 'T';
arr[15] = '7';
arr[16] = 'l';
arr[17] = '1';
arr[18] = 'L';
arr[19] = '1';
for (i = 0; s[i]; i++)
{
for (j = 0; j < 20; j++)
{
if (s[i] == (char) arr[j])
s[i] = (char) arr[j + 1];
}
}
return (s);
}
