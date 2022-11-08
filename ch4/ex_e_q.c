/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:07/11/2022****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int loan_amt, num_month;
	float roi, emi = 0, roi_m, cont_p_amt, int_m, remaining_amt, tot_i = 0;
	int i;
	
	printf("Enter Loan amount, Number of Months, Rate of Interest: ");
	scanf("%d %d %f", &loan_amt, &num_month, &roi);	
	roi_m = (roi/12)/100;
	
	emi = loan_amt * ((roi_m*(pow((1+roi_m),num_month)))/((pow((1+roi_m),num_month))-1));
	
	remaining_amt = loan_amt;

	printf("Principal Amount\t Interest\tEMI\tRemaining Prinicipal Amount\n");
	
	for(i = 0; i < num_month; i++)
	{
		int_m = roi_m*remaining_amt;
		cont_p_amt = emi - int_m;	
		remaining_amt = remaining_amt - cont_p_amt;
		printf("%f\t%f\t%f\t%f\n",cont_p_amt, int_m, emi, remaining_amt);
		tot_i = tot_i  + int_m;	
	}	
	
	printf("Total Interest Paid: %f\n", tot_i);
		
	return 0;
}
