#include <stdio.h>
#include <ctype.h>

int main (void) {

    char unit;
    float temp;

    printf("\nIs the temperature in the (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    switch (unit){
        case 'C':
            printf("\nEnter the temp in Celsius: ");
            scanf("%f", &temp);
            temp = (temp * 9 / 5) + 32;
            printf("\nThe temp in Farenheit is: %.1f", temp);
            break;
        case 'F':
            printf("\nEnter the temp in Farenheit: ");
            scanf("%f", &temp);
            temp = ((temp - 32) * 5 / 9);
            printf("\nThe temp in Celsius is: %.1f", temp);
            break;
        default:
            printf("\n %c is not a valuable unit of mesarument", unit);
            break;
    }

    return 0;
}