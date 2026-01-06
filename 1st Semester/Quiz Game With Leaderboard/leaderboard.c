#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leaderboard.h"

struct Player {
    char name[50];
    int score;
};

void saveScore(const char *name, int score) {
    FILE *fp = fopen("leaderboard.txt", "a");
    if (!fp) {
        printf("Error opening leaderboard file!\n");
        return;
    }

    fprintf(fp, "%s %d\n", name, score);
    fclose(fp);
}

void showLeaderboard() {
    FILE *fp = fopen("leaderboard.txt", "r");
    if (!fp) {
        printf("\nNo leaderboard data yet.\n");
        return;
    }

    struct Player players[100];
    int count = 0;

    while (fscanf(fp, "%s %d", players[count].name, &players[count].score) != EOF) {
        count++;
    }
    fclose(fp);

    // Sort by score (descending)
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (players[j].score > players[i].score) {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\n========= LEADERBOARD =========\n");
    for (int i = 0; i < count && i < 10; i++) {
        printf("%d. %s - %d\n", i + 1, players[i].name, players[i].score);
    }
    printf("================================\n");
}
