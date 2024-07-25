#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int userChoice, computerChoice;
    srand(time(0));
    printf("Enter your choice (0 for rock, 1 for paper, 2 for scissors): ");
    scanf("%d", &userChoice);
    computerChoice = rand() % 3;
    printf("You chose: %d\n", userChoice);
    printf("Computer chose: %d\n", computerChoice);
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    return 0;
}
