/*****Chapter-6 [F] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
void pass(int, int);
int main()
{
	int i = 135, a = 135, k;
	k = pass(i, a);		//Error: function pass is void.
	printf("%d\n",k);	
	return 0;
}

void pass(int j, int b)
int c;
{
	c = j + b;	//Error: c declared out the scope.
	return (c);	//Error: It is void function so it should not return any value
}
