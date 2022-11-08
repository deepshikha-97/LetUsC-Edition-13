/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:02/11/2022****/
#include <stdio.h>

int main()
{
	int machine_cost = 6000, salvage =  2000, ear_per_year = 1000;
	float invest = 6000, rate = 9, m_profit;
	int year = 0;
	
	while(1)
	{
		year++;
		
		m_profit = ear_per_year * year + salvage;
		
		invest = invest + (invest * rate/100);
		
		if((invest-6000) > m_profit)
			break;
		printf("In %d, Profit from Machine %f and profit from investment %f\n", year, m_profit, invest-6000);
		
	}
		
		printf("Minimum life of the machine to make more attractive profit is %d\n", year - 1);	
	return 0;
}
