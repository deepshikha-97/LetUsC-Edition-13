/*****Chapter-7 [A] Output ****/
/*****Author: Deepshikha Date:15/01/2022****/
#include <stdio.h>
int f(int);
int g(int);
int main()
{
	int x, y, s = 2;
	s *= 3;
	y = f(s);
	x = g(s);
	printf("%d %d %d\n", s, y, x);
	return 0;
}
int t = 8;
	
int f(int a)
{
	a += -5;
	t -= 4;
	return(a + t);
}

int g(int a)
{
	a = 1;
	t += a;
	return(a + t);
}

