/*****Attempt the following : H
Cumpute the smallest number of notes
****/
/*****Author: Deepshikha Date:24/07/2022****/

#include <stdio.h>

int main()
{
	int sum, smallest_no_note;
	printf("Enter Sum of Rs. N : ");
	scanf("%d",&sum);
	smallest_no_note = (sum/100) + (sum%100)/50 + ((sum%100)%50)/10 + (((sum%100)%50)%10)/5 + ((((sum%100)%50)%10)%5)/2 + (((((sum%100)%50)%10)%5)%2)/1;
	printf("Smallest number of notes that will combine to give %d is  %d\n",sum,smallest_no_note);
	return 0;
}
