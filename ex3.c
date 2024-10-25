#include <stdio.h>
#include <string.h>

int main(void) {
  char animal[3];
  printf("Do you have a cat or a dog?\n");
  scanf("%3s", &animal);
  if (strcmp(animal, "cat") == 0) {
    printf("meow");
  } else if (strcmp(animal, "dog") == 0) {
    printf("woof");
  }
}
