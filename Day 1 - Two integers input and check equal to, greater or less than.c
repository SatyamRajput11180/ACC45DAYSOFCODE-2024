#include <stdio.h>
int main() {
    int num1, num2;
    
    printf("Enter 1st Value: ");
    scanf("%d\n", &num1);

    printf("Enter 2nd Value: ");
    scanf("%d\n", &num2);

    if(num1 == num2) {
        printf("num1 is equal to num2");
    } if(num1 > num2) {
        printf("num1 is greater than num2");
    } else {
        printf("num1 is less than num2");
    }
    return 0;
}