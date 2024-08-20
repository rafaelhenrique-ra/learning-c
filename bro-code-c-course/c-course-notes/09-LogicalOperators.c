#include <stdio.h>
#include <stdbool.h>

int main(){

    /*
    Logical Operators:
    && =  AND
    || = OR
    ! = NOT 

    */

   float temp = 25;
   bool sunny = true;

   if (temp >= 0 && temp <=30 && sunny){
        printf("\nThe weather is good!");
   }
   else{
        printf("\nThe weather is bad!");
   }
   
   if (temp <= 0 || temp >= 30){
    printf("\nThe weather is bad!");
   }
   else{
    printf("\nThe weather is good!");
   }
    return 0;
}