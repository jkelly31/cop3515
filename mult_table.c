#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
// part 1 - display mult table
    printf("Multiplication Table:\n");
    // outer loop: rows 1->12
    for (int i = 1; i <= 12; i++) {
        // inner loop: columns 1->12
        for (int j = 1; j <= 12; j++) {
            // print product to get each row's values
            printf("%4d", i * j);
        }
        printf("\n");   // new line for each new row
    }
// part 2 - number guessing game
    // seed rand() w/ current time to get random nums each time
    srand(time(0));
    // get random num btwn 1-10
    int guessAnswer = (rand() % 10) + 1;
    int userGuess; 

    // ask user for their guess
    printf("Enter your guess (1-10): ");

    // evaluate user's guess compared to random num
    for (;;) {      // infinite loop until correct num is guessed
        scanf("%d", &userGuess);    // take user's input to compare

        if (userGuess > guessAnswer) {
            printf("Too high!\nEnter your guess (1-10): ");
        } else if (userGuess < guessAnswer) {
            printf("Too low!\nEnter your guess (1-10): ");
        } else {
            printf("You guessed it!\n");
            break;  // exit loop when correct num is guessed
        }
    }

}