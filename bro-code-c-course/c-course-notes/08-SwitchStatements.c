#include <stdio.h>

int main(void) {
    double grade;
    int category;

    printf("\nEnter your numerical grade: ");
    scanf("%lf", &grade);

    if (grade >= 9 && grade <= 10) {
        category = 1;
    } else if (grade >= 7 && grade < 9) {
        category = 2;
    } else if (grade >= 5 && grade < 7) {
        category = 3;
    } else {
        category = 4;
    }

    switch (category) {
    case 1:
        printf("It's perfect!\n");
        break;
    case 2:
        printf("Very good!\n");
        break;
    case 3:
        printf("Good!\n");
        break;
    case 4:
        printf("Needs improvement.\n");
        break;
    }

    return 0;
}
