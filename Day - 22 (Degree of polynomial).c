#include <stdio.h>
int main() {
    int N;
    
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);
    
    int coefficients[N];
    
    printf("Enter the coefficients (A0, A1, ..., A(N-1)): ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &coefficients[i]);
    }
    
    int degree = -1;

    for (int i = 0; i < N; i++) {
        if (coefficients[i] != 0) {
            degree = i;  // Update degree to the current index if coefficient is non-zero
        }
    }

    printf("The degree of the polynomial is: %d\n", degree);
    
    return 0;
}
