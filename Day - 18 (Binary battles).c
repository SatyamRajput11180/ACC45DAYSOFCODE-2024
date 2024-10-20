#include <stdio.h>
#include <math.h>

int main() {
    int N; 
    int A; 
    int B; 

    printf("Enter the number of teams (N, power of 2): ");
    scanf("%d", &N);
    printf("Enter the time for each round (A) in minutes: ");
    scanf("%d", &A);
    printf("Enter the break time (B) in minutes: ");
    scanf("%d", &B);

    int numberOfRounds = log2(N);
    
    int totalTime = (numberOfRounds * A) + ((numberOfRounds - 1) * B);

    printf("Total time for the event: %d minutes\n", totalTime);

    return 0;
}
