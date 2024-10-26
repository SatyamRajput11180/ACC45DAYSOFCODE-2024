#include <stdio.h>
int main() {
    int N;
    printf("Enter the number of spooky days left until Halloween (N): ");
    scanf("%d", &N);

    int tuesdays = 0;
    for (int i = 0; i < N; i++) {
        if ((i + 1) % 7 == 0) {  // Check if the day is Tuesday
            tuesdays++;
        }
    }

    printf("Dracula can enjoy his favorite menu on Tuesdays %d times in the next %d days.\n", tuesdays, N);
    return 0;
}