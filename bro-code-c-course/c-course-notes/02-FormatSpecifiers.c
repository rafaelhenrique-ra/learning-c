#include <stdio.h>

int main(){
    // format specifier % = defines and formats a type of data to be displayed

    /* %c = character
       %s = string (array of characters)
       %f = float
       %lf = double
       %d = integer

       %.1 = decimal precision
       %1 = minimum field width
       %- = left align
    */

   float item1 = 5.75;
   float item2 = 20.00;
   float item3 = 100.00;

   printf("Item 1: $%4.2f\n", item1);
   printf("Item 2: $%4.2f\n", item2);
   printf("Item 3: $%4.2f\n", item3);

   return 0;
    
    }