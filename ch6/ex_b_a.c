/*****Chapter-6 [B] Output ****/
/*****Author: Deepshikha Date:12/12/2022****/
#include <stdio.h>
int addmult(int, int)		//Error: Semicolon is missing.
int main()
{
	int i = 3, j = 4, k, l;
	k = addmult(i, j);
	l = addmult(i, j);
	printf("%d %d\n", k, l);
	return 0;
}

int addmult(int ii, int jj)
{
	int kk, ll;
	kk = ii + jj;
	ll = ii * jj;
	return(kk, ll);		//Error: Return can return only one value.
}

