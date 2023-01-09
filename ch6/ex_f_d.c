/*****Chapter-6 [F] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
void function(int *);
int main()
{
	int i = 35, *z;
	z = function(&i);	//Error: It is void function.
	printf("%d\n",z);
	return 0;
}

void function(int *m)
{
	return(m + 2);		//Error: It is a void function.
}
