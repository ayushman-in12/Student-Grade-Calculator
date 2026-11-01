
#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    float marks[5], total = 0, percentage;
    char grade;

    printf("===== STUDENT GRADE CALCULATOR =====\n");

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("\nEnter marks out of 100:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Enter marks between 0 and 100.\n");
            return 0;
        }

        total += marks[i];
    }

    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("\n===== STUDENT RESULT =====\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNo);
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    if (grade == 'F')
        printf("Result: Fail\n");
    else
        printf("Result: Pass\n");

    return 0;
}
