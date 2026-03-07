#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks < 50) {
        printf("Fail");
    }
    else if(marks <= 100) {
        printf("Pass");
    }
    else {
        printf("Invalid marks");
    }

    return 0;
}