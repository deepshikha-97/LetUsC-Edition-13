/*** Calculating Agrregate marks and percentage of five subjects***/
/***Date : 05/07/2022 Author: Deepshikha***/

#include <stdio.h>

int main()
{
	float s1, s2, s3,  s4, s5, tot_marks, per;
	
	printf("Enter the marks in all five subjects\n");
	printf("Subject1: ");
	scanf("%f",&s1);
	printf("Subject2: ");
	scanf("%f",&s2);
	printf("Subject3: ");
	scanf("%f",&s3);
	printf("Subject4: ");
	scanf("%f",&s4);
	printf("Subject5: ");
	scanf("%f",&s5);
	
	tot_marks = s1+s2+s3+s4+s5;	
	printf("Aggreagate Marks: %f\n", tot_marks);

	per = tot_marks/5;
	printf("Percentage: %f%%\n",per);

	return 0;
}
