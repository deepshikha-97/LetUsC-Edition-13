/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:05/10/2022****/
#include <stdio.h>

int main()
{
	int i = 1, num;
	
	while(i <= 500)
	{
		num = (i/100)*(i/100)*(i/100) + ((i%100)/10)*((i%100)/10)*((i%100)/10) + ((i%100)%10)*((i%100)%10)*((i%100)%10);
		if(num == i)
			printf("%d is Armstrong number\n", i);
		i++;
	}
	return 0;
}
