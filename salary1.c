#include <stdio.h>

int main() {
    int daysWorked;
    float dailyWage, totalSalary;

    printf("Enter number of days worked: ");
    scanf("%d", &daysWorked);

    printf("Enter daily wage: ");
    scanf("%f", &dailyWage);

    totalSalary = daysWorked * dailyWage;

    printf("Total Salary = %.2f", totalSalary);

    return 0;
}