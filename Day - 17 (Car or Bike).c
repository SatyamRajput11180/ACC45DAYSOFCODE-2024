#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter the time taken by BIKE (in minutes): ");
    scanf("%d", &X);
    printf("Enter the time taken by CAR (in minutes): ");
    scanf("%d", &Y);

    if (X < Y) {
        printf("Traveling by BIKE is faster.\n");
    } else if (X > Y) {
        printf("Traveling by CAR is faster.\n");
    } else {
        printf("Both options take the same time.\n");
    }

    return 0;
}