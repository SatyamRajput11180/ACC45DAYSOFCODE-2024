#include <stdio.h>

const char* whoseServe(int P, int Q) {
    int totalPoints = P + Q;
    
    // Calculate the current turn (each turn has 2 serves)
    int turn = (totalPoints / 2) % 2; 
    
    // If turn is 0, it's Alice's serve, otherwise it's Bob's serve
    return (turn == 0) ? "Alice" : "Bob";
}

int main() {
    int P, Q;
    printf("Enter Alice's score (P): ");
    scanf("%d", &P);
    printf("Enter Bob's score (Q): ");
    scanf("%d", &Q);
    
    printf("It is %s's serve.\n", whoseServe(P, Q));
    return 0;
}
