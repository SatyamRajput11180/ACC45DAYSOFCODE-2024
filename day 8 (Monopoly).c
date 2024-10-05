#include <stdio.h>

int main() {
    // Variables to store the profits of the four companies
    int P, Q, R, S;

    // Input profits of the companies
    printf("Enter the profit of Company A: ");
    scanf("%d", &P);
    
    printf("Enter the profit of Company B: ");
    scanf("%d", &Q);
    
    printf("Enter the profit of Company C: ");
    scanf("%d", &R);
    
    printf("Enter the profit of Company D: ");
    scanf("%d", &S);

    // Check for monopoly conditions
    if (P > Q + R + S) {
        printf("Company A has a monopoly.\n");
    } else if (Q > P + R + S) {
        printf("Company B has a monopoly.\n");
    } else if (R > P + Q + S) {
        printf("Company C has a monopoly.\n");
    } else if (S > P + Q + R) {
        printf("Company D has a monopoly.\n");
    } else {
        printf("There is no monopoly in the market.\n");
    }

    return 0;
}