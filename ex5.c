#include <stdio.h> 

void sayHello(char name[]) {
    printf("Hello, %s!\n", name); 
}   
int main (void){   
    char name[20];   
    printf("What is your name?\n");   
    scanf("%s", &name);   
    sayHello(name);
}
