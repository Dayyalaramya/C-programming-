#include <stdio.h>

int main() {
    int marks;

    printf("Enter JNTU student marks: ");
    scanf("%d", &marks);

    if(marks >= 40) {
        printf("Student Passed in JNTU University Exam");
    }
    else {
        printf("Student Failed in JNTU University Exam");
    }

    return 0;
}