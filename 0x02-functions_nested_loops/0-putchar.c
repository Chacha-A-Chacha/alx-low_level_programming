#include <stdio.h>
/**
 *int main ();
 *{
 *putchar(_putchar\n);
 *return(0);
 *}
 */
int main(void)
{
char name[] = "_putchar";
int i;

for (i = 0; i < 9; i++)
{
_putchar(name[i]);
}

_putchar('\n');

return (0);
}
