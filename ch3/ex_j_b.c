/*****Chapter-3 Exercise[J] Output ****/
/*****Author: Deepshikha Date:25/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int code;
	scanf("%d",&code);
	if(code > 1)
		printf("jerusalem\n");
	else
		if(code < 1)
			printf("Eddie\n");
		else
			printf("C Brain\n");
	return 0;
}
