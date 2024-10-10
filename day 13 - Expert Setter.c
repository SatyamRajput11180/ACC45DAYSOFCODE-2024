#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the number of problems submitted (X): ");
    scanf("%d", &X);
    printf("Enter the number of problems approved (Y): ");
    scanf("%d", &Y);

    if (2 * Y >= X) {
        printf("Munchy is an expert.\n");
    } else {
        printf("Munchy is not an expert.\n");
    }
    return 0;
}