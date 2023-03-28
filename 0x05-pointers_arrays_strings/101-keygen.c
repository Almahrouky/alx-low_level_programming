#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - is the main function
 *
 * Return: 0 or 1
 */
int main(void)
{
int i, random;
srand((unsigned int)(time(NULL)));
char *numbers;
numbers = "0123456789";
char *letters;
letters = "abcdefghijklmnopqrstuvwxyz";
char *LETTERS;
LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *symbols;
symbols = "!@#$%^&*?";
char password;
random = rand() % 4;
for (i = 0; i < 14; ++i)
{
if (random == 1)
{
password[i] = numbers[rand() % 10];
random = rand() % 4;
printf("%c", password[i]);
}
else if (random == 2)
{
password[i] = letters[rand() % 26];
random = rand() % 4;
printf("%c", password[i]);
}
else if (random == 3)
{
password[i] = LETTERS[rand() % 26];
random = rand() % 4;
printf("%c", password[i]);
}
else
{
password[i] = symbols[rand() % 9];
random = rand() % 4;
printf("%c", password[i]);
}
}
}
