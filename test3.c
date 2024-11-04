#include <stdio.h>

int main() {
    int age;
printf("What is your age?\n");

    scanf("%d", &age);    
    if (age > 110) {
        printf("You are expired\n");
} 
    else if (age >= 18) {
        printf("You can vote\n");
    } 
    else {
        printf("You cannot vote\n");
    }

    printf("Thanks for your cooperation\n");

    return 0;}
// this code was written by a human
