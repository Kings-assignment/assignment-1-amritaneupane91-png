// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>
int main(){
    int a,b,c;
    int result;
    printf("Enter three variables:");
    scanf("%d %d %d",&a,&b,&c);
    result=(a>b)&&(c!=0);
    printf("The result is %d",result);
    return 0;
}
