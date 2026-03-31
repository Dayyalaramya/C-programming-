#include <stdio.h>

int main() {
    int totalDays, presentDays, absentDays;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    printf("Enter number of days present: ");
    scanf("%d", &presentDays);

    if(presentDays > totalDays) {
        printf("Invalid input!");
        return 0;
    }

    absentDays = totalDays - presentDays;

    printf("Absent Days = %d\n", absentDays);

    if(presentDays >= (totalDays * 0.75)) {
        printf("Good Attendance\n");
    } else {
        printf("Low Attendance\n");
    }

    return 0;
}