/**
 * Title: Quiz Questions Module
 * Description: This module contains the questions, options, and answers for the quiz game.
 * Author: Md Abdullah
 * Date: 06/01/2026
 */

#include <stdio.h>
#include <string.h>
#include "questions.h"

char questions[10][256] = {
    "Who invented the C programming language?",
    "What is the size of an int in most systems?",
    "Which symbol is used for a pointer?",
    "Which loop guarantees at least one execution?",
    "Which header file is needed for printf?",
    "What is the output of 5 / 2 in C?",
    "Which keyword is used to define a constant?",
    "What is the index of the first element in an array?",
    "Which data type is used for characters?",
    "Which operator is used for equality comparison?"
};

char options[10][4][100] = {
    {"A. Dennis Ritchie", "B. James Gosling", "C. Bjarne Stroustrup", "D. Tim Berners-Lee"},
    {"A. 1 byte", "B. 2 bytes", "C. 4 bytes", "D. 8 bytes"},
    {"A. #", "B. *", "C. &", "D. @"},
    {"A. for loop", "B. while loop", "C. do-while loop", "D. foreach loop"},
    {"A. stdlib.h", "B. studio.h", "C. string.h", "D. stdio.h"},
    {"A. 2.5", "B. 3", "C. 2", "D. 4"},
    {"A. static", "B. const", "C. let", "D. permanent"},
    {"A. 0", "B. 1", "C. -1", "D. Depends on compiler"},
    {"A. int", "B. char", "C. float", "D. string"},
    {"A. =", "B. !=", "C. ==", "D. ==="}
};

char answers[10] = {'A','B','B','C','D','C','B','A','B','C'};

int playQuiz(const char *playerName) { 
    int score = 0;
    char ans;

    printf("\nWelcome, %s! Let's begin the quiz.\n", playerName);

    for (int i = 0; i < 10; i++) {
        printf("\nQ%d: %s\n", i + 1, questions[i]);

        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }

        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &ans);

        if (ans == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! Correct answer was %c.\n", answers[i]);
        }
    }

    printf("\nQuiz Completed! Your final score: %d / 10\n", score);
    return score;
}
