#include <stdio.h>
int main() 

{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) 
	{
        printf("The number is positive.\n");
        if (number % 2 == 0) 
		{
            printf("It is an even number.\n");
        } else 
		{
            printf("It is an odd number.\n");
        }
    } else if (number < 0) 
	{
        printf("The number is negative.\n");
    } else 
	{
        printf("The number is zero.\n");
    }

    return 0;
}
