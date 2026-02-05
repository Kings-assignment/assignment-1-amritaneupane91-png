// Write a C expression that calculates the sum of the squares of three different numbers.
#include <stdio.h>
int main(){
    int a,b,c;
    int sum;
    printf("Enter three different numbers:");
    scanf("%d %d %d",&a,&b,&c);
    sum=(a*a)+(b*b)+(c*c);
    printf("The sum of three different numbers is %d\n",sum);
    return 0;
}
