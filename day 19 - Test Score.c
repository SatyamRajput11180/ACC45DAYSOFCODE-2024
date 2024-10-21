#include <stdio.h>

int main() {
    int N, X, Y;

    printf("Enter the number of problems (N): ");
    scanf("%d", &N);
    printf("Enter the marks for each problem (X): ");
    scanf("%d", &X);
    printf("Enter the target marks (Y): ");
    scanf("%d", &Y);
    
    int maxMarks = N * X;

    if (Y >= 0 && Y <= maxMarks && Y % X == 0) {
        printf("Yes, Chef can achieve exactly %d marks.\n", Y);
    } else {
        printf("No, Chef cannot achieve exactly %d marks.\n", Y);
    }
    return 0;
}