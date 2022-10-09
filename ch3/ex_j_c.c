/*****Chapter-3 Exercise[J] Output ****/
/*****Author: Deepshikha Date:25/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float sal;
	printf("Enter the salary");
	scanf("%f", &sal);
	if(sal >= 25000 && sal <= 40000)
		printf("Manager\n");
	else
		if(sal >= 15000 && sal < 25000)
			printf("Accountant\n");
		else
			printf("Clerk\n");
	return 0;
}
