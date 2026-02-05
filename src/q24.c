// Create an expression that checks if a given number is a perfect square.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main () {

    int num;
    int result;

    printf("Enter a number:");
    scanf("%d", &num);

    result= (sqrt(num)*sqrt(num)==num);

    printf("the result is %d\n", result);

    return 0;

}

