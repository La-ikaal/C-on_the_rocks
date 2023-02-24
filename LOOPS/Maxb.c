#include <stdio.h>

/**
 * max - finds max among numbers
 * Return: returns maximum of the numbers
 */

int max( int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	else 
	{
		return (b);
	}
}

int main ()
{
	int x = 5;
	int y = 4;
	int z = 7;
	int max1, max2;

	max1 = max(5 , 4);
	max2 = max(max1 , z);
	putchar(max2 + '0');
	putchar('\n');
	return (max2);
}

