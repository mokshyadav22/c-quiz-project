#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {
        "1. What is the extension of a C language source file?",
        "2. Which of the following is not a logical operator?",
        "3. Who is known as the father of C language?"
    };

    char options[][100] = {
        "A. .cpp\tB. .c\tC. .plet\tD. .html",
        "A. &&\tB. ||\tC. !\tD. $",
        "A. Bjarne Stroustrup\tB. James Gosling\tC. Dennis Ritchie\tD. Guido van Rossum"
    };

    char answers[3] = {'B', 'D', 'C'};
    int numberOfQuestions = 3;
    char guess;
    int score = 0;

    printf("\n=============================\n");
    printf("   WELCOME TO THE C QUIZ!    \n");
    printf("=============================\n\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);
        
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &guess);
        guess = toupper(guess); // Convert to uppercase for easy comparison

        if (guess == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i]);
        }
    }

    printf("=============================\n");
    printf("       FINAL RESULT          \n");
    printf("=============================\n");
    printf("Your Score: %d out of %d\n", score, numberOfQuestions);
    
    if (score == numberOfQuestions) {
        printf("Excellent! Full marks.\n");
    } else {
        printf("Good try! Keep practicing.\n");
    }

    return 0;
}