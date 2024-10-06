#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter the rental cost per month (X): ");
    scanf("%d", &X);
    printf("Enter the purchase cost (Y): ");
    scanf("%d", &Y);

    if (X <= 0) {
        printf("Rental cost must be greater than zero.\n");
        return 1;
    }
    if (Y <= 0) {
        printf("Purchase cost must be greater than zero.\n");
        return 1;
    }

    int M = (Y / X) - 1;

    if (M < 0) {
        M = 0;
    }

    printf("The maximum number of months for renting is: %d\n", M);

    return 0;
}