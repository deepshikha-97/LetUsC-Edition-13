/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void circular_shift(int *a, int *b, int *c);
int main()
{
	int x,  y, z;
	printf("Enter the value of x, y, z for circular shift: ");
	scanf("%d %d %d", &x, &y, &z);
	circular_shift(&x, &y, &z);
	printf("After circular shift y = %d z = %d x = %d\n", y, z, x);
	return 0;
}

void circular_shift(int *a, int *b, int *c)
{
	int temp;
	temp = *c;
	*c = *b;
	*b = *a;
	*a = temp;
}
