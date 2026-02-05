// Given a variable num, write an expression that checks if it is a power of 2.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>

int main (){

int num;
int result;

printf("Enter a number:");
scanf("%d", &num);

result= !(num & (num -1));

printf("The result is %d\n", result);

return 0;

}
