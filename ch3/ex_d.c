/*****Chapter-3 Exercise[D] Output ****/
/*****Author: Deepshikha Date:28/08/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 10, b = 12, c = 0;
	
	if(a != 6 && b > 5)
		printf("1:True\n");
	else
		printf("1:False\n");
			
	if(a == 9 || b < 3)
		printf("2:True\n");
	else
		printf("2:False\n");

	if(!(a < 10))
		printf("3:True\n");
	else
		printf("3:False\n");

	if(!(a > 5 && c))
		printf("4:True\n");
	else
		printf("4:False\n");

	if(5 && c!= 8 || !c)
		printf("5:True\n");
	else
		printf("5:False\n");
	return 0;
}
