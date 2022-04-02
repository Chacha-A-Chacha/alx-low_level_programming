#include "main.h"
#include <stdio.h>

/**
*main - function that prints all arguments in a commandline
*@argc: the size  of the argv array, the number of command line arguments
*@argv: an array containing the program line arguments
*Return: 0 if successful
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0, i < argc; i++)
printf("%s\n", argv[i])
return (0);
}
