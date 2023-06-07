/*****Chapter-7 [B] Output ****/
/*****Author: Deepshikha Date:15/01/2022****/
#include <stdio.h>

int main()
{
	unsigned a = 25;
	long unsigned b = 25l;
	printf("%lu %u\n", a, b);	//Error: Format specifier for a should be %u and for b should be lu
	return 0;
}

