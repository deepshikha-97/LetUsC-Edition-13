/*****Chapter-7 [B] Output ****/
/*****Author: Deepshikha Date:15/01/2022****/
#include <stdio.h>

int main()
{
	long float a = 25.345e454;	//Error: Long float declaration does not exist.
	unsigned double b = 25;		//Error: unsigned double declaration does not exist.
	printf("%lf %d\n", a, b);
	return 0;
}

