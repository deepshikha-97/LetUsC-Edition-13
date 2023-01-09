/*****Chapter-6 [F] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
void check(int );
int main()
{
	int k = 35, z;
	z = check(k);	//Error: check is a void function.
	printf("%d\n",z);
	return 0;
}

void check(m)		//Error: type of m should be specified
{
	int m;		//Error: Redeclaration  of m  
	if(m  > 40)
		return (1);	//Error: Return is added while function is void
	else
		return (0);
}
