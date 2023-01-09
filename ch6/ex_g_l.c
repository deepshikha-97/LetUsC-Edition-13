/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:09/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b);
int main()
{
	int x, y;
	int r;
	printf("Enter the two numbers to compute common divisor using Eclid's algorithm: ");
	scanf("%d %d", &x, &y);
	r = gcd(x, y);
	printf("The greatest common divisor is %d.\n", r);
	return 0;
}

int gcd(int a, int b)
{
	int d;
	int n;
	
	if(b > a)
	{
		n = b;
		b = a;
		a = n;
	}
	
	if(a/b != 0)
	{
		while((d = (a - (a/b)*b)) != 0)
		{
			a = b;
			b = d;	
		}
	}
	return b; 
}
