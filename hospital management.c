#include <stdio.h>
#include <string.h>

struct Patient {
    int id;
    char name[50];
    int age;
    int days;
};

int main() {
    struct Patient p;
    int choice;
    float bill;

    while(1) {
        printf("\n--- Hospital Management System ---\n");
        printf("1. Add Patient\n");
        printf("2. Display Patient\n");
        printf("3. Calculate Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Patient ID: ");
                scanf("%d", &p.id);

                printf("Enter Patient Name: ");
                scanf("%s", p.name);

                printf("Enter Age: ");
                scanf("%d", &p.age);

                printf("Enter Days Admitted: ");
                scanf("%d", &p.days);
                break;

            case 2:
                printf("\n--- Patient Details ---\n");
                printf("ID: %d\n", p.id);
                printf("Name: %s\n", p.name);
                printf("Age: %d\n", p.age);
                printf("Days: %d\n", p.days);
                break;

            case 3:
                bill = p.days * 2000;
                printf("Total Bill = %.2f\n", bill);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}