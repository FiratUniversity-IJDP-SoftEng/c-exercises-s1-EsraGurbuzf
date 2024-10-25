#include <stdio.h>

int main(void){
  int guess;
  
  do {
    printf("Guess a number between 1 and 5:\n");
    scanf("%d", &guess);
  } while(guess < 1 || guess > 5);
    

  if (guess == 3) {
    printf("You guessed correctly!\n");
  } else {
      printf("You guessed incorrectly!\n");
    (guess != 3);
  }
}
