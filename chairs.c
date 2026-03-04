#include <stdio.h>

int main() {
    int chairs, students;

    printf("Enter number of chairs: ");
    scanf("%d", &chairs);

    printf("Enter number of students: ");
    scanf("%d", &students);

    if (chairs >= students) {
        printf("Chairs are sufficient.\n");
    } else {
        printf("Chairs are not sufficient.\n");
        printf("Need %d more chairs.\n", students - chairs);
    }

    return 0;
}