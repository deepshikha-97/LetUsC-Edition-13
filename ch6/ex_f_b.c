/*****Chapter-6 [F] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
void jiaayjo(int, int)		//Error: Missed Semicolon
int main()
{
	int p = 23, f = 24;
	jiaayjo(&p, &f);	//Integer should be passed but here address is passed.
	printf("%d %d\n", p, f);
	return 0;
}

void jiaayjo(int q, int g)
{
	q = q + q;
	g = g + g;
}
