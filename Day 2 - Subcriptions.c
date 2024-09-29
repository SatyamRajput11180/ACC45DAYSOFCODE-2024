#include <stdio.h>
#include <math.h>

int main() {
    int N; 
    float X; 

    printf("Enter the number of friends: ");
    scanf("%d", &N);
    printf("Enter the cost of one subscription: ");
    scanf("%f", &X);

    int subscriptionsNeeded = (N + 5) / 6; 

    float totalCost = subscriptionsNeeded * X;

    printf("minimum total cost: %.2f rupees\n", totalCost);
    return 0;
}
