/*****Chapter-7 [A] Output ****/
/*****Author: Deepshikha Date:15/01/2022****/
#include <stdio.h>
int x = 10;
int main()
{
	int x = 20;
	{
		int x = 30;	
		printf("%d\n", x);
	}
	printf("%d\n", x);
	return 0;
}
