#include <stdio.h>
#include <string.h>

#define MAX_CONTESTS 100

int main() {
    int N;
    char contestCodes[MAX_CONTESTS][10];
    int start38Count = 0;
    int ltime108Count = 0;

    printf("Enter the number of contests: ");
    scanf("%d", &N);

    printf("Enter the contest codes (START38 or LTIME108):\n");
    for (int i = 0; i < N; i++) {
        scanf("%s", contestCodes[i]);
    }

    for (int i = 0; i < N; i++) {
        if (strcmp(contestCodes[i], "START38") == 0) {
            start38Count++;
        } else if (strcmp(contestCodes[i], "LTIME108") == 0) {
            ltime108Count++;
        }
    }

    printf("Problems in START38: %d\n", start38Count);
    printf("Problems in LTIME108: %d\n", ltime108Count);

    return 0;
}