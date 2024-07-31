#include <stdio.h>
#include <math.h>

int main (void) {

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the redius of a circumference: ");
    scanf("%lf", &radius);

    circumference = PI * radius * 2;
    area = PI * pow(radius, 2);


    printf("\nCircunference: %lf", circumference);
    printf("\nArea: %lf", area);

    return 0;
}