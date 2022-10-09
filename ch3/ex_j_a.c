/*****Chapter-3 Exercise[J] Output ****/
/*****Author: Deepshikha Date:25/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, min, max;
	scanf("%d %d", &max, &x);
	if( x > max)
		max = x;
	else
		min = x;
	return 0;
}
