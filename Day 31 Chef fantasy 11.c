#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of players to choose from: ");
    scanf("%d", &N);
    
    int choices = N * (N - 1);
    
    printf("Number of different choices Chef has: %d\n", choices);
    
    return 0;
}