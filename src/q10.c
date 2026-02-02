// Write a C program to swap the values of two variables using a temporary variable.

#include <stdio.h>

int main(){
    int x,y;
    int temp;

    printf("Enter two numbers:");
    scandf("%d %d", &x, &y);

    printf("Value of x before swap is %d and y is %d\n", x,y);

    temp = x;
    x=y;
    y=temp;

    printf("Value of x after swap is %d and y is %d\n", x,y);


    return 0;
}