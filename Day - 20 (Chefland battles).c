#include <stdio.h>

int main() {
    char decision[4];
    int in_count = 0;

    printf("Enter the decisions of the 4 referees (I for IN, O for OUT):\n");

    for (int i = 0; i < 4; i++) {
        printf("Referee %d: ", i + 1);
        scanf(" %c", &decision[i]);
        
        if (decision[i] == 'I' || decision[i] == 'i') {
            in_count++;
        }
    }

    if (in_count == 4) {
        printf("The ball is considered IN.\n");
    } else {
        printf("The ball is considered OUT.\n");
    }

    return 0;
}