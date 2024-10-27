#include <stdio.h>

int main() {
    // Declare variables for tastiness values
    int a, b, c, d;
    
    // Input tastiness values for ingredients A, B, C, and D
    printf("Enter tastiness of ingredient A: ");
    scanf("%d", &a);
    printf("Enter tastiness of ingredient B: ");
    scanf("%d", &b);
    printf("Enter tastiness of ingredient C: ");
    scanf("%d", &c);
    printf("Enter tastiness of ingredient D: ");
    scanf("%d", &d);
    
    int T1 = a + c; // A and C
    int T2 = a + d; // A and D
    int T3 = b + c; // B and C
    int T4 = b + d; // B and D
    
    int maxTastiness = T1; // Start with T1 as the maximum
    
    if (T2 > maxTastiness) maxTastiness = T2;
    if (T3 > maxTastiness) maxTastiness = T3;
    if (T4 > maxTastiness) maxTastiness = T4;

    printf("Maximum possible tastiness of the dish: %d\n", maxTastiness);
    
    return 0;
}