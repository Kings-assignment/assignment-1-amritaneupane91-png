// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>
int main(){
    int a,b,c;
    int result;
    printf("Enter three variables:");
    scanf("%d %d %d",&a,&b,&c);
    result=(a==b)&&(b!=c);
    printf("The result is %d\n",result);
    return 0;
}