
#include <stdio.h>

int main(void) {
    int guess;
    
    printf("Guess a number between 1 and 5\n");
    scanf("%d", &guess);
    
    if (guess == 3) {
        printf("You win!\n");
    } else { 
        printf("Guess again!\n");
    }
}
