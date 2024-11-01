#include <stdio.h>

int main() {
    int A, B, C, D;
    
    // Input current scores A, B, and target scores C, D
    printf("Enter the current score (A B): ");
    scanf("%d %d", &A, &B);
    printf("Enter the target score (C D): ");
    scanf("%d %d", &C, &D);
    
    // Check if target score is achievable
    if (C >= A && D >= B) {
        printf("Yes, the score can become %d:%d.\n", C, D);
    } else {
        printf("No, the score cannot become %d:%d.\n", C, D);
    }
    
    return 0;
}
