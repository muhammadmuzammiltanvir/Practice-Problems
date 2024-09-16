#include<stdio.h>
int main()
{
	float income, tax;
	printf("Enter your income: ");
	scanf("%f", &income);
	
	if(income>=0 && income<=250000)
	tax=income*0;
	else if(income>=250001 && income<=500000)
	tax=income*0.05;
	else if(income>=500001 && income<=1000000)
	tax=income*0.20;
	else if(income>1000000)
	tax=income*0.30;
	else
	printf("Invalid input");
	printf("Total income: %.2f\nTax amount: %.2f\nNet income after tax: %.2f", income, tax, income-tax);
}