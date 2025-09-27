#include<stdio.h>
int main ()
{
	int tax_rate,salary,gross_salary;
	printf("Enter salary in rupees:\n");
	scanf("%d",&salary);
	tax_rate=salary*0.1;
	printf("The tax rate is:%d\n",tax_rate);
	gross_salary=salary-tax_rate;
	printf("The gross salary is:%d\n",gross_salary);
	return 0;
	
	
}