#include <stdio.h>

int main() {
    int a, b, c, d;
    
    printf("Enter tastiness of ingredient A: ");
    scanf("%d", &a);
    printf("Enter tastiness of ingredient B: ");
    scanf("%d", &b);
    printf("Enter tastiness of ingredient C: ");
    scanf("%d", &c);
    printf("Enter tastiness of ingredient D: ");
    scanf("%d", &d);
    
    int T1 = a + c; 
    int T2 = a + d; 
    int T3 = b + c; 
    int T4 = b + d; 
    
    int maxTastiness = T1; 
    
    if (T2 > maxTastiness) maxTastiness = T2;
    if (T3 > maxTastiness) maxTastiness = T3;
    if (T4 > maxTastiness) maxTastiness = T4;

    printf("Maximum possible tastiness of the dish: %d\n", maxTastiness);
    
    return 0;
}