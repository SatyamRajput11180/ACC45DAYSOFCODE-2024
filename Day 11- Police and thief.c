#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables for positions
    int X, Y;
    
    // Input the initial positions
    printf("Enter the initial position of the policeman (X): ");
    scanf("%d", &X);
    
    printf("Enter the initial position of the thief (Y): ");
    scanf("%d", &Y);
    
    // Calculate the distance
    int distance = abs(X - Y);
    
    // Since the relative speed is 1 unit per second, the time to catch up is equal to the distance
    int time = distance; // Time in seconds
    
    // Output the result
    printf("The minimum time for the policeman to catch the thief is: %d seconds\n", time);
    
    return 0;
}