#include <stdio.h>

int main(){

    /*
    Constant = fixed value that cannot be altered by the program during its execution

    OBS: Always use Upper Letter to declare a variable

    Use const to define a constant
    */

    const float PI = 3.14159;

    // PI = 340; -> If you do that, the program won't work

    printf("%.5f", PI);

    return 0;
}