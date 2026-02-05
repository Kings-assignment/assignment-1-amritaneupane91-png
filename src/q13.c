// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include <stdio.h>
int main(){
    int n;
    int result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=(n/2*2==n)&&(n/3*3==n);
    printf("The result is %d\n",result);
    return 0;
}
