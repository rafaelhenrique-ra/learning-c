#include <stdio.h>
#include <math.h>

int main (void) {
    double A, B, C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2)+ pow(B, 2));

    printf("The hypotenuse value is: %g", C);

    return 0;
}