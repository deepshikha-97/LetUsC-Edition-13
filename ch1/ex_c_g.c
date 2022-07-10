/***Caclulating cost price of one Item***/
/***Date : 07/07/2022 Author: Deepshikha***/

#include <stdio.h>

int main()
{
	int tot_sel, tot_pft; 
	float u_price;	
	printf("Enter the Total selling price of 15 Items: ");
	scanf("%d", &tot_sel);
	printf("Enter the Total profit on 15 Items: ");
	scanf("%d", &tot_pft);
	
	u_price = (tot_sel - tot_pft)/15.0;	
	
	printf("Cost Price of one item = %f\n",u_price);

	return 0;
}
