/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
#include <math.h>
void fivenum_sum_avg_sdev(int n1, int n2, int n3, int n4, int n5, int *sum, float *avg, float *stddev);
int main()
{
	int n1, n2, n3, n4, n5;
	int sum;
	float avg, stddev;
	printf("Enter five number: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	fivenum_sum_avg_sdev(n1, n2, n3, n4, n5, &sum, &avg, &stddev);
	printf("Sum: %d\n", sum);
	printf("Average: %f\n", avg);
	printf("Standard Deviation: %f\n", stddev);
	return 0;
}

void fivenum_sum_avg_sdev(int n1, int n2, int n3, int n4, int n5, int *sum, float *avg, float *stddev)
{
	*sum = n1 + n2 + n3 + n4 + n5;
	*avg = (n1 + n2 + n3 + n4 + n5)/5.0;
	*stddev = sqrt((pow(n1-*avg,2) + pow(n2-*avg,2) +pow(n3-*avg,2) +pow(n4-*avg,2) +pow(n5-*avg,2))/5.0);
}
