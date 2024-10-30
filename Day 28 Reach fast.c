#include <stdio.h>
#include <stdlib.h>

int min_steps(int A, int B, int K) {
    int distance = abs(B - A);
    
    if (K == 0) {
        return (A == B) ? 0 : -1;
    }

    return (distance + K - 1) / K;
}

int main() {
    int A, B, K;

    printf("Enter the coordinate of Chef (A): ");
    scanf("%d", &A);
    printf("Enter the coordinate of Chefina (B): ");
    scanf("%d", &B);
    printf("Enter the maximum step size (K): ");
    scanf("%d", &K);

    int result = min_steps(A, B, K);
    if (result == -1) {
        printf("Chef cannot reach Chefina.\n");
    } else {
        printf("Minimum steps required: %d\n", result);
    }

    return 0;
}