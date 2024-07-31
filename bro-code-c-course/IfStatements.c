#include <stdio.h>

int main (void) {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("Ok, you can drink now!");
    }
    else if (age == 0){
        printf("Dude, you were just born!");
    }
    else if (age < 0){
        printf("Wtf, you haven't been born, who th are you????");
    }
    else {
        printf("Nah, you're too young to sign up. Maybe in some years!");
    }
    return 0;

}