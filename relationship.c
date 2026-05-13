#include <stdio.h>
#include <string.h>

// Structure for College
struct College {
    char collegeName[50];
    char location[50];
};

// Structure for Student
struct Student {
    char studentName[50];
    int rollNo;
    struct College clg;   // Relationship: Student belongs to a College
};

int main() {

    // Creating student object
    struct Student s1;

    // Assigning student details
    strcpy(s1.studentName, "Ramya");
    s1.rollNo = 101;

    // Assigning college details
    strcpy(s1.clg.collegeName, "ABC Engineering College");
    strcpy(s1.clg.location, "Hyderabad");

    // Displaying details
    printf("Student Details\n");
    printf("------------------\n");
    printf("Name      : %s\n", s1.studentName);
    printf("Roll No   : %d\n", s1.rollNo);

    printf("\nCollege Details\n");
    printf("------------------\n");
    printf("College   : %s\n", s1.clg.collegeName);
    printf("Location  : %s\n", s1.clg.location);

    return 0;
}