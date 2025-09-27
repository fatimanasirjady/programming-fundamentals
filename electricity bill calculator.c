#include<stdio.h>
int main()
{//calculation of bill when prices for units vary
	int bill,units;
	printf("Enter units consumed:");
	scanf("%d", &units);
    bill=(units<=100)? (units*5):
		(units<=200)?(100*5 +(units-100)*7):
			(100*5+100*7+(units-200)*10);
			
	printf("The bill is :%d",bill);
	
	return 0;
}