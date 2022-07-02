#include <stdio.h>
/**
* main - prints combinations
* Description: prints all possible different combinations of two digits
* Return: 0
*/
int main(void)
{
int number;
int number1;
number= 48;
while (number <= 57)
{
number1 = 0;
while (number1 <= 57)
{
if (number <number1)
{
putchar(number);
putchar(number1);
if (number < 56)
{
putchar(',');
purchar(' ');
}
}
number1++;
}
number++;
}
putchar('\n');
return (0);
}
