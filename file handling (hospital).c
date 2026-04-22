#include <stdio.h>
#include <stdlib.h>

struct Patient {
    int id;
    char name[50];
    int age;
    int days;
};

int main() {
    struct Patient p;
    FILE *fp;
    int choice;

    while(1) {
        printf("\n--- Hospital Management (File Handling) ---\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                fp = fopen("patients.txt", "a"); // append mode

                if(fp == NULL) {
                    printf("File error!\n");
                    exit(1);
                }

                printf("Enter ID: ");
                scanf("%d", &p.id);

                printf("Enter Name: ");
                scanf("%s", p.name);

                printf("Enter Age: ");
                scanf("%d", &p.age);

                printf("Enter Days Admitted: ");
                scanf("%d", &p.days);

                fprintf(fp, "%d %s %d %d\n", p.id, p.name, p.age, p.days);

                fclose(fp);
                printf("Patient record saved!\n");
                break;

            case 2:
                fp = fopen("patients.txt", "r"); // read mode

                if(fp == NULL) {
                    printf("No records found!\n");
                    break;
                }

                printf("\n--- Patient Records ---\n");

                while(fscanf(fp, "%d %s %d %d", &p.id, p.name, &p.age, &p.days) != EOF) {
                    printf("ID: %d | Name: %s | Age: %d | Days: %d\n",
                           p.id, p.name, p.age, p.days);
                }

                fclose(fp);
                break;

            case 3:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}