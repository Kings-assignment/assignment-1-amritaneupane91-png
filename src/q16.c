// Given two variables x and y, write an expression that calculates the average of their values.
#include <stdio.h>
int main(){
    int x,y;
    int avg;
    printf("Enter two variables:");
    scanf("%d %d",&x,&y);
    avg=(x+y)/2;
    printf("The average of their value is %d\n",avg);
    return 0;
}
