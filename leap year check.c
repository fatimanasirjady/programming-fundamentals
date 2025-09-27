#include<stdio.h>
int main ()
//checking if an year is a leap year 
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	(year % 400 == 0 )||(year % 4 == 0 && year % 100 != 0)?
	printf("This is a leap year."):
		printf("This is not a leap year.");
	
	return 0;
	
}