#include <stdio.h>

int main() {
    int N;
    printf("Enter the memory in bits: ");
    scanf("%d", &N);

    // Check if memory is a multiple of 4 (nibbles)
    if (N % 4 == 0) {
        printf("Good\n");
    } else {
        printf("Not Good\n");
    }

    return 0;
}