// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include <math.h>
int main (){

int x,y;
int sum;
printf(" Enter two numbers:");
scanf("%d %d", &x, &y);

sum= round(sqrt(x)+sqrt(y));

printf("The sum is %d\n", sum);


return 0;

}