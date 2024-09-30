#include <stdio.h>

int main() {
    int N, X;
    
    // Input the lengths of the stick
    printf("Enter the length of the stick (N): ");
    scanf("%d", &N);
    printf("Enter the desired length (X): ");
    scanf("%d", &X);
    
    // Check the conditions for obtaining X from N
    if (X <= N && (N % 2) == (X % 2)) {
        printf("Yes, Chef can obtain a stick of length %d.\n", X);
    } else {
        printf("No, Chef cannot obtain a stick of length %d.\n", X);
    }
    
    return 0;
}
