#include<stdio.h>
int main ()
{
    int time, distance, average_speed;
	printf("Enter time (hours) travelled by car\n Note:Time must be between one to five hours and must not be negative\n");
	scanf("%d",&time);
	printf("Enter distance (miles) travelled by car\n Note: The car did not travel same distance per hour and distance must not be negative\n");
	scanf("%d",&distance);
	average_speed=distance/time;
	printf("The average speed is:%d",average_speed);
	
	return 0;
	
	
}