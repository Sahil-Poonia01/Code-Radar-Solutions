#include <stdio.h>

// Function to remove duplicate scores and create a unique ranked leaderboard
int create_ranked_leaderboard(int scores[], int n, int ranked[]) {
    int rank_index = 0;
    ranked[rank_index++] = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] != scores[i - 1]) {
            ranked[rank_index++] = scores[i];
        }
    }
    return rank_index; // Return new size of the ranked leaderboard
}

// Function to find rank using binary search
int find_rank(int ranked[], int n, int score) {
    int low = 0, high = n - 1, rank = n + 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (ranked[mid] == score) {
            return mid + 1; // Exact rank found
        } else if (ranked[mid] < score) {
            high = mid - 1;
            rank = mid + 1; // Update rank position
        } else {
            low = mid + 1;
        }
    }
    return rank;
}

int main() {
    int n, m;

    // Input: leaderboard scores
    printf("Enter number of leaderboard scores: ");
    scanf("%d", &n);
    int scores[n], ranked[n];

    printf("Enter leaderboard scores (descending order): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Create ranked leaderboard (remove duplicates)
    int unique_count = create_ranked_leaderboard(scores, n, ranked);

    // Input: player's game scores
    printf("Enter number of game scores: ");
    scanf("%d", &m);
    int game_scores[m];

    printf("Enter game scores (ascending order): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &game_scores[i]);
    }

    // Find and print rank after each game
    printf("Player's ranks after each game:\n");
    for (int i = 0; i < m; i++) {
        int rank = find_rank(ranked, unique_count, game_scores[i]);
        printf("%d\n", rank);
    }

    return 0;
}
