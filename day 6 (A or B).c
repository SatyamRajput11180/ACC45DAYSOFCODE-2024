#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the time to solve Problem A (X minutes): ");
    scanf("%d", &X);
    printf("Enter the time to solve Problem B (Y minutes): ");
    scanf("%d", &Y);

    int total1 = 1500 - 6 * X - 4 * Y;

    int total2 = 1500 - 6 * Y - 2 * X;

    int maxPoints = (total1 > total2) ? total1 : total2;

    printf("Maximum points Chef can score: %d\n", maxPoints);
    return 0;
}