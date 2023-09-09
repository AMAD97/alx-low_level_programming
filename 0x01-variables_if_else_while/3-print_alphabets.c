 #include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char l  = 'a';

	while (l  <= 'z')
	{
		putchar(l);
		l++;
	}
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}	
