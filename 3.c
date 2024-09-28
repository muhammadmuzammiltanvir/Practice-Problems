#include <stdio.h>

void categorize_age(int age) {
    if (age < 0) {
        printf("Invalid age\n");
    } else {
        if (age <= 12) {
            printf("Child\n");
        } else {
            if (age <= 19) {
                printf("Teenager\n");
            } else {
                if (age <= 64) {
                    printf("Adult\n");
                } else {
                    printf("Senior\n");
                }
            }
        }
    }
}

int main() 
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    categorize_age(age);
    return 0;
}
