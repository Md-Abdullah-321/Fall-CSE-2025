#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questions.h"
#include "leaderboard.h"
#include "utils.h"


int main() {
    int choice;
    char name[50];
    char safeName[50];

    while (1) {
        printf("\n==============================\n");
        printf("        QUIZ GAME MENU        \n");
        printf("==============================\n");
        printf("1. Play Quiz\n");
        printf("2. View Leaderboard\n");
        printf("3. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                printf("Enter your name: ");
                fgets(name, sizeof(name), stdin);
                trimNewline(name);

                sanitizeName(safeName, name);

                int score = playQuiz(name);
                saveScore(safeName, score);

                printf("\nYour score has been saved!\n");
                break;

            case 2:
                showLeaderboard();
                break;

            case 3:
                printf("Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
