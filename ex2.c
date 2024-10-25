#include<stdio.h>

int main(void){
    int i = 0;
    printf("How old are you?\n");
    int age;
    scanf("%d", &age);
do{
    printf("Happy birthday!\n");
    i++; 
}while (i < age); 
}
