// Write an expression that checks if a number is both positive and even.
#include <stdio.h>
int main(){
    int n;
    int result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=(n>0)&&(n%2==0);
    printf("The result is %d\n",result);
    return 0;
}
