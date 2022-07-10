/***Calculating Gross Salary of Ramesh***/
/***Date : 05/07/2022 Author: Deepshikha***/

#include <stdio.h>

int main()
{
	int basic_sal=0;
	float da = 0, hra = 0, gross_sal = 0;
	
	printf("Enter the basic salary of Ramesh : ");
	scanf("%d",&basic_sal);
	
	da = (basic_sal*40.0)/100.0;
	hra = (basic_sal*20.0)/100.0;

	gross_sal = basic_sal + da + hra;
	
	printf("Ramesh's gross salary is %f\n",gross_sal);
	
	return 0;
}
