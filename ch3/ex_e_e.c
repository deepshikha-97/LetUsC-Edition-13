/*****Chapter-3 Exercise[E] Output ****/
/*****Author: Deepshikha Date:28/08/2022****/
#include <stdio.h>

int main()
{	
	int x = 20, y = 40, z = 45;
	
	if(x > y && x > z)
		printf("biggest = %d\n",x);
	else if(y > x && y > z)
		printf("biggest = %d\n",y);
	else if(z > x && z > y)
		printf("biggest = %d\n",z);
		
	return 0;
}
