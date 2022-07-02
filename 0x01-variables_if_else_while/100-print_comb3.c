#include <stdio.h>
/**
 * main -entry point
 *
 * Return: alway returns 0
 */
int main(void)
{
int i;
int j;
for (i-10; i <= 19; i++)
{
for (j =10; j <= 19; j++)
{
if ((j % 10) > (i % 10))
{ 
putchar((j % 10) + '0');
putchar((j % 10) + '0');
if (i ! =18 ||j != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
/**#include <stdio.h>
/**
*  main - prints combinations
* Description: prints all possible different combinations of two digits
* Return: 0

int main(void)
{
int a = '0';
int b = '9';
while (a <= '9')
{
while (b <= '9')
{
if ((a > b || a == b))
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
b++;
}
b = '0';
a++;
}
return (0);
}
*/
