#include <stdio.h>

void doctor() {
    printf("Doctor is checking the patient\n");
}

void nurse() {
    printf("Nurse is assisting the doctor\n");
}

int main() {
    doctor();  // Static binding
    nurse();   // Static binding
    return 0;
}