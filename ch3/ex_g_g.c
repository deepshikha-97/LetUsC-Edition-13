/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:24/09/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	float time_req;
	
	printf("Enter the time(in hours) required by the worker to finish the job: ");
	scanf("%f", &time_req);
	
	if(time_req >= 2 && time_req <3)
		printf("Worker is highly efficient\n");
	else if(time_req >= 3 && time_req < 4) 	
		printf("Worker should improve his speed\n");
	else if(time_req >= 4 && time_req <= 5) 	
		printf("Worker should be given training to improve the speed\n");
	else
		printf("Worker is terminated\n");
	return 0;
}
