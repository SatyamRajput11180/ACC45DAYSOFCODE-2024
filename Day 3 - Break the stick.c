#include <stdio.h>

int main() {
    int N, X;
    
    printf("Enter the length of the stick (N): ");
    scanf("%d", &N);
    printf("Enter the desired length (X): ");
    scanf("%d", &X);
    
    if (X <= N && (N % 2) == (X % 2)) {
        printf("Yes, Chef can obtain a stick of length %d.\n", X);
    } else {
        printf("No, Chef cannot obtain a stick of length %d.\n", X);
    }
    return 0;
}