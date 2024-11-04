#include <stdio.h>

int main() {
    int rounds;
    printf("Enter number of rounds: ");
    scanf("%d", &rounds);

    int player1_score, player2_score;
    int cumulative_p1 = 0, cumulative_p2 = 0;
    int max_lead = 0, winner = 0;

    for (int i = 1; i <= rounds; i++) {
        printf("Enter scores for round %d (Player 1 Player 2): ", i);
        scanf("%d %d", &player1_score, &player2_score);

        cumulative_p1 += player1_score;
        cumulative_p2 += player2_score;

        int current_lead;
        int current_leader;
        if (cumulative_p1 > cumulative_p2) {
            current_leader = 1;
            current_lead = cumulative_p1 - cumulative_p2;
        } else {
            current_leader = 2;
            current_lead = cumulative_p2 - cumulative_p1;
        }

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    printf("Winner: Player %d with a maximum lead of %d\n", winner, max_lead);

    return 0;
}