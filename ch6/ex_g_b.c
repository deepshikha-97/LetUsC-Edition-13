/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
#include <math.h>
void threesub_avg_per(int n1, int n2, int n3, float *avg, float *per);
int main()
{
	int n1, n2, n3;
	float avg, per;
	printf("Enter the marks of three subjects: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	threesub_avg_per(n1, n2, n3, &avg, &per);
	printf("Average: %f\n", avg);
	printf("Percentage: %f\n", per);
	return 0;
}

void threesub_avg_per(int n1, int n2, int n3, float *avg, float *per)
{
	*avg = (n1 + n2 + n3)/3.0;
	*per = (n1 + n2 + n3)*100/300.0;
}
