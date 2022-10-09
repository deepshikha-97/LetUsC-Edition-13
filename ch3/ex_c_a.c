/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:24/08/2022****/
#include <stdio.h>

int main()
{
	int cost_price, sell_price;
	
	printf("Enter cost price of an Item: ");
	scanf("%d",&cost_price);
	printf("Enter selling price of an Item: ");
	scanf("%d",&sell_price);
	
	if((sell_price-cost_price) > 0)
		printf("Made Profit of %d\n",sell_price-cost_price);
	else if((sell_price-cost_price) < 0)
		printf("Incurred Loss of %d\n",cost_price-sell_price);
	else
		printf("Neither made profit nor loss\n");

	return 0;
}
