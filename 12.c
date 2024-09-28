#include <stdio.h>

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    const char *status = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";

    printf("The number is: %s\n", status);

    return 0;
}

