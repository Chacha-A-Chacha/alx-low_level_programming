#include <stdio.h>
#include <stdlib.h>

/**
*main - function that multplies two numbers
*@argc: the size of the argv array, the number of arguments in a command line 
*@argv: the array containing command line arguments
*Return: 0 when successful
*/

int main(int argc, char *argv[])
{
int x, y;

if (argc != 3)
printf("Error\n");
else
{
x = strtol(argv[1], 0, 10);
y = strtol(argv[2], 0, 10);
printf("%d\n", x*y);
}
return (0);
  
