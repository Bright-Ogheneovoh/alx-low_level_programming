#include <stdio.h>

/**
 *
 * main - Prints all alphabets in both cases
 *
 * Description: using the main function
 * this program prints 'Alphabets in both cases'
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
