/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:24/09/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int weight;
	
	printf("Enter the weight in Pounds: ");
	scanf("%d",&weight);
	
	if(weight<115)
		printf("Boxer Class: Flyweight\n");
	else if(weight>=115 && weight<=121)
		printf("Boxer Class: Bantamweight\n");
	else if(weight>=122 && weight<=153)
		printf("Boxer Class: Featherweight\n");
	else if(weight>=154 && weight<=189)
		printf("Boxer Class: Middleweight\n");
	else
		printf("Boxer Class: Heavyweight\n");
	return 0;
}
