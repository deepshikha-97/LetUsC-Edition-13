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
	(sal >= 25000 && sal <= 40000)?printf("Manager\n"):((sal >= 15000 && sal < 25000)?printf("Accountant\n"):printf("Clerk\n"));
	return 0;
}
