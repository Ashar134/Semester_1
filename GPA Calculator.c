#include <stdio.h>

float calculate(char grade, int hour);

void main()
{
    int count = 0, subject, gpa = 0, hour;
    char grade;
    
    printf("Enter the number of your subjects: ");
    scanf("%d", &subject);
    printf("\n");

    for (int i = 1; i <= subject; i++)
    {
        printf("\nEnter the GRADE of your subject (%d): ", i);
        scanf("%s", &grade);

        printf("Enter the credit hour of your subject: ");
        scanf("%d", &hour);
        gpa = gpa + calculate(grade, hour);
        count = count + hour;
    }
    printf("Total GPA is %f", gpa / count);
}

// FUNCTIONS
float calculate(char grade, int hour)
{
    if (grade == 'A')
    {
        return 4.0 * hour;
    }
    else if (grade == 'A-')
    {
        return 3.67 * hour;
    }
    else if (grade == 'B+')
    {
        return 3.33 * hour;
    }
    else if (grade == 'B')
    {
        return 3.0 * hour;
    }
    else if (grade == 'B-')
    {
        return 2.67 * hour;
    }
    else if (grade == 'C+')
    {
        return 2.33 * hour;
    }
    else if (grade == 'C')
    {
        return 2.0 * hour;
    }
    else if (grade == 'C-')
    {
        return 1.67 * hour;
    }
    else if (grade == 'D+')
    {
        return 1.33 * hour;
    }
    else if (grade == 'D')
    {
        return 1.0 * hour;
    }
    else if (grade == 'F')
    {
        return 0.0 * hour;
    }
}