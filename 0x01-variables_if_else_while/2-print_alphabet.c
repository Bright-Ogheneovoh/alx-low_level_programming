#include <stdio.h>

/**
 * main - prints all alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnop";
int i;

for (i = 0; i < 26; i++)
{
	putchar(alp[i]);
}
putchar('\n');
return (0);
}
