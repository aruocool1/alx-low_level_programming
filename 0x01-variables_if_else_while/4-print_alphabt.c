#includde <stdio.h>
/**
 * main -printing alphabetsin lowercase
 * Description: program that prints thealphabet in lowercase
 * Retrun: 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
