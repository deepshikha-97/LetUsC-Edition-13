/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:28/10/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int set = 10, p, q, n;
	float r, a;
	int i = 0;
	
	for(i = 0; i < set; i++)
	{
		printf("Enter p, r, n, and q: ");
		scanf("%d %f %d %d",&p, &r, &n, &q);
		
		a = p * (pow((1+(r/(100*q))), n*q));
		
		printf("Compound amount : %f\n", a);
	}
	return 0;
}
