#include <stdio.h>

int main() {
    int N, X;

    printf("Enter the total number of cards (N): ");
    scanf("%d", &N);
    printf("Enter the number of face-up cards (X): ");
    scanf("%d", &X);

    int face_down = N - X;

    int min_operations = (X < face_down) ? X : face_down;

    printf("Minimum number of operations required: %d\n", min_operations);
return 0;
}