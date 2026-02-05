// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>
int main(){
    int n;
    int result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=(n%3==0)||(n%5==0);
    printf("The result is %d\n",result);
    return 0;
}
