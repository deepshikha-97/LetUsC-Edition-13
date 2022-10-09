/*****Chapter-3 Exercise[J] Output ****/
/*****Author: Deepshikha Date:25/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, min, max;
	scanf("%d %d", &max, &x);
	(x > max)?(max = x):(min = x);
	printf("%d %d %d\n", x, min, max);
	return 0;
}
