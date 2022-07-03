#include <stdio.h>
/**
* main - prints combinations
* Description: prints all possible different combinations of two digits
* Return: 0
*/
int main(void)
{
int digit1, digit 2;
for (digit = 0; digit1 < 9; digit1++)
{
for (digit2 = digit1 + 1; digit 2 < 10; digit2++)
{
putchar ((digit1 % 10) + '0');
putchar ((digit2 % 10) + '0');

if (digit1 ==8 && digit2 == 9)
	continue;
putchar(',');
puthcar(' ');
}
}
putchar('\n');
return (0);
}
