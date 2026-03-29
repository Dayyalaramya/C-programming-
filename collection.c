#include <stdio.h>

int main() {
    float collection;

    printf("Enter box office collection (in crores): ");
    scanf("%f", &collection);

    if(collection >= 500) {
        printf("Industry Hit Movie!\n");
    }
    else if(collection >= 200) {
        printf("Blockbuster Movie!\n");
    }
    else if(collection >= 100) {
        printf("Hit Movie!\n");
    }
    else {
        printf("Average or Flop Movie.\n");
    }

    return 0;
}