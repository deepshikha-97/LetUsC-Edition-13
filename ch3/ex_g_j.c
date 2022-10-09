/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:24/09/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int R, G, B;
	float C, M, Y, K;
	float W;
	
	printf("Enter the values of R, G, B: ");
	scanf("%d%d%d",&R, &G, &B);
	
	if((R/255.0 >= G/255.0) && (R/255.0 >= B/255.0))
		W = R/255.0;
	else if((G/255.0 >= R/255.0) && (G/255.0 >= B/255.0))
		W = G/255.0;
	else
		W = B/255.0;
	
	if(W == 0)
	{
		C = 0;
		M = 0;
		Y = 0;
		K = 1 - W;
	}
	else
	{
		C = ((W - (R/255.0))/W);
		M = ((W - (G/255.0))/W);
		Y = ((W - (B/255.0))/W);
		K = 1- W;
	}
	
	printf("C = %f M = %f Y = %f K  = %f\n", C, M, Y, K);	
	
	return 0;
}
