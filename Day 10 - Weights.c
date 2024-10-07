#include <stdio.h>

int main() {
    int W, X, Y, Z;

    // Input the weights
    printf("Enter the weight of the object (W): ");
    scanf("%d", &W);
    printf("Enter weight X: ");
    scanf("%d", &X);
    printf("Enter weight Y: ");
    scanf("%d", &Y);
    printf("Enter weight Z: ");
    scanf("%d", &Z);

    // Check all possible combinations of weights
    if (W == X || W == Y || W == Z || 
        W == (X + Y) || W == (X + Z) || W == (Y + Z) || 
        W == (X + Y + Z)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}