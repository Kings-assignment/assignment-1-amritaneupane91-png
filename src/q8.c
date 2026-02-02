/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */

#include <stdio.h>

int main(){
    float celsius,fahrenheit;
    printf("Enter the celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("The converted temperature is %f",fahrenheit);
    return 0;
}