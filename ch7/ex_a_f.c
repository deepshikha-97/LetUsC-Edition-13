/*****Chapter-7 [A] Output ****/
/*****Author: Deepshikha Date:15/01/2022****/
#include <stdio.h>
int g(int);
int main()
{
	int i, j;
	for(i = 1; i < 5; i++)
	{
		j= g(i);
		printf("%d\n", j);
	}
	return 0;
}

int g(int x)
{
	static int v = 1;
	int b = 3;
	v += x;
	return(v+x+b);
}
