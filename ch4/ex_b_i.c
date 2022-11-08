/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:09/10/2022****/
#include <stdio.h>

int main()
{
	int num = 0;
	char another = 'y';
	int big=0, small=0;
	printf("Enter a numbers to find Range: ");
	scanf("%d",&num);
	big  = num;
	small = num;
	printf("Do you want to enter another number [Y/N]? : ");
	scanf(" %c",&another);
	while(another == 'y' || another == 'Y')
	{
		scanf("%d",&num);
		printf("Do you want to enter another number [Y/N]? : ");
		scanf(" %c",&another);
		if(num >= big)
			big = num;
		else if(num <= small)
			small = num;
	}
	printf("Range: (%d, %d)", small, big);
	return 0;
}
