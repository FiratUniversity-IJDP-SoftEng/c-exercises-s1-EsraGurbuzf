
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
// You say "guess again" but your program stops working, please think that what if the user give the input out of the 1-5 interval, your program stops.
// But you should continiue to ask user for the right input in this case betweer 1 and 5 inclusive. 
// User just can use 1-2-3-4-5 numbers, otherwise, you should keep asking again and again. Remind- do while Esra...Thanks.
