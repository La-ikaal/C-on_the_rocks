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
	int a, e, d, f;
	int n, n1, n2, n3, n4;
	
	printf(" Enter the 1st  number : \n");
	scanf("%d", &n);
	printf(" Enter the 2nd  number : \n");
	scanf("%d", &n1);
	printf(" Enter the 3rd  number : \n");
	scanf("%d", &n2);
	printf(" Enter the 4th  number : \n");
	scanf("%d", &n3);
	printf(" Enter the 5th  number : \n");
	scanf("%d", &n4);
	
	a = max(n, n1);
	e = max(a, n2);
	d = max(e, n3);
	f = max(d, n4);
	printf("THE MAXIMUM NUMBER IS : %d \n", f);
	return (0);
}

