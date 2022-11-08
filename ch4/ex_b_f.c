/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:02/11/2022****/
#include <stdio.h>

int main()
{
	int p, m = 21, c;
	
	while(1)
	{
		printf("Player can pickup 1, 2, 3, or 4 matchsticks: ");
		scanf("%d", &p);
		if(p <  1 || p > 4)
		{
			printf("You can not pick less than 1 or more than 4\n");
			continue;
		}
		
		m = m - p;
		printf("Available matchstick: %d\n", m);
			
		c = 5 - p;
		printf("Computer picked up : %d matchsticks\n",c);
		m = m - c;
		printf("Available matchstick: %d\n", m);
		
		if(m == 1)
		{
			printf("Computer Won!!");
			break;
		}
	}
	return 0;
}
