/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:05/10/2022****/
#include <stdio.h>

int main()
{
	int work_hour, i = 0;
	int num_of_emp = 10, ot_per_hr = 12, ot_hr;
		
	
	while(i < 10)
	{
		printf("Enter the working Hour: ");
		scanf("%d",&work_hour);
		ot_hr = work_hour - 40;
		
		if(ot_hr > 0)
			printf("Overtime Paid = %d\n", ot_hr*ot_per_hr);
		else
			printf("No Overtime...So not eligible for Overtime Paid\n");
		i++;
	}	
		 	
	return 0;
}
