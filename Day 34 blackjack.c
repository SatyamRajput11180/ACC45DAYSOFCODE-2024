#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    int sum = A + B;
    int requiredC = 21 - sum;
    
    if (requiredC >= 1 && requiredC <= 10) {
        printf("%d\n", requiredC);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
