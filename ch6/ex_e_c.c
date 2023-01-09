/*****Chapter-6 [E] Output ****/
/*****Author: Deepshikha Date:21/12/2022****/
#include <stdio.h>
void fun(int, int);

int main()
{
	int i = 5, j = 2;
	fun(i, j);
	printf("%d %d\n", i, j);
	return 0;
}

void fun(int i, int j)
{
	i = i * i;
	j = j * j;
}
