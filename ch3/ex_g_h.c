/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:24/09/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int credit, avl_stock, order_quant;
	
	printf("Enter the quantity available in stock: ");
	scanf("%d", &avl_stock);
	printf("Enter the order quantity: ");
	scanf("%d", &order_quant);
	printf("Enter the credit(for OK:1, not ok:0): ");
	scanf("%d", &credit);
	
	if((credit == 1) && (order_quant <= avl_stock))
		printf("Supply his requirement.\n");
	else if(credit != 1)
		printf("Send him intimation.\n");
	else if((credit == 1) && (order_quant >= avl_stock))
		printf("Supply what is in stock. Intimate him that balance will be shipped later.");	
	return 0;
}
