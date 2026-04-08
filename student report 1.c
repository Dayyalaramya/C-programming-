#include <stdio.h>

int main() 
{
    int rollNo;
    char name[50];
    float m1, m2, m3, total, average;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter marks for 3 subjects:\n");
    scanf("%f %f %f", &m1, &m2, &m3);

    // Calculate total and average
    total = m1 + m2 + m3;
    average = total / 3;

    // Display report
    printf("\n--- Student Report ---\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Marks: %.2f, %.2f, %.2f\n", m1, m2, m3);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);

    // Grade calculation
    if (average >= 75)
        printf("Grade: Distinction\n");
    else if (average >= 60)
        printf("Grade: First Class\n");
    else if (average >= 50)
        printf("Grade: Second Class\n");
    else
        printf("Grade: Fail\n");

    return 0;
}