#include <stdio.h>

int main()
{

    // variable = declaration -> initialization

    int x;                           // declaration
    x = 10;                          // initialization
    int y = 123;                     // declaration + initialization
    int age = 19;                    // integer
    float gpa = 3.89;                // floating point number
    char grade = 'F';                // character
    char name[] = "Rafael Henrique"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your avarage grade is %c", grade);

    return 0;
}