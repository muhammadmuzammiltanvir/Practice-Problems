#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);
	
	if(marks>=90)
	printf("You have secured grade A");
	else if(marks>=80 && marks<90)
	printf("You have secured grade B");
	else if(marks>=70 && marks<80)
	printf("You have secured grade C");
	else if(marks>=60 && marks<70)
	printf("You have secured grade D");
	else
	printf("You have secured grade F");
	
	return 0;
}