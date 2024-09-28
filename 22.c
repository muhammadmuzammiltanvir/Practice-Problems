#include <stdio.h>

int main() 
{
    int attendance;
    float assignmentScore, examScore, finalGrade;

   
    printf("Enter attendance percentage (0-100): ");
    scanf("%d", &attendance);

    
    printf("Enter assignment score (0-100): ");
    scanf("%f", &assignmentScore);

    
    printf("Enter exam score (0-100): ");
    scanf("%f", &examScore);

    
    if (attendance >= 75) 
	{
        if (assignmentScore >= 50) 
		{
            if (examScore >= 50) 
			{
                finalGrade = (assignmentScore * 0.4) + (examScore * 0.6);
                printf("Final Grade: %.2f - Passed\n", finalGrade);
            } else 
			{
                printf("Final Grade: Fail due to exam score.\n");
            }
        } else 
		{
            printf("Final Grade: Fail due to assignment score.\n");
        }
    } else {
        printf("Final Grade: Fail due to attendance.\n");
    }

    return 0;
}

