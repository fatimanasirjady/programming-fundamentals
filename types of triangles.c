#include<stdio.h>
int main()
{
	//take three sides of a triangle
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d", &b);
	printf("Enter c:");
	scanf("%d",&c);
	(a==b && b==c)?printf("Triangle is equilateral."):
	(a!=b && b!=c)?printf("Triangle is scalene"):
		printf("Triangle is isosceles.");
		return 0;
		
}