#include "main.h"

/**
* print_alphabet_x10 - prints out the alphabet
* main - uses built in function
* Return: 0 if succesful
* print_alphabet_x10
* Print 10 times the alphabet, in lowercase.
*/

void print_alphabet_x10(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}

_putchar('\n');
}
}
