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
int rmult;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
rmult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", rmult);
}

return (0);
}
