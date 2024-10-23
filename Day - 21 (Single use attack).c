#include <stdio.h>

int main() {
    int H, X, Y;

    printf("Enter boss health (H): ");
    scanf("%d", &H);
    printf("Enter regular attack damage (X): ");
    scanf("%d", &X);
    printf("Enter special attack damage (Y): ");
    scanf("%d", &Y);

    int min_attacks = 0;

    if (H > 0) {
        min_attacks = (H + X - 1) / X;
    }

    if (H > Y) {
        int remaining_health = H - Y;
        int attacks_after_special = (remaining_health + X - 1) / X;
        int total_attacks_with_special = 1 + attacks_after_special;
        
        if (total_attacks_with_special < min_attacks) {
            min_attacks = total_attacks_with_special;
        }
    }

    printf("Minimum number of attacks needed: %d\n", min_attacks);

    return 0;
}