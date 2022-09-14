#include <stdio.h>

#include <stdlib.h>

#include <string.h>

/**
 * main - prints all alphabets without q and e
 *
 * Description: prints them in lower case
 * Return 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if(ch != q && ch != e)
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}

