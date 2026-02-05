// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include <stdio.h>
int main(){
    int x,y,z;
    int temp;
    printf("Enter three variables:");
    scanf("%d %d %d",&x,&y,&z);
    printf("The value of x before swapping is %d, y is %d and z is %d\n",x,y,z);
    temp=x;
    x=y;
    y=z;
    z=temp;
    printf("The value of x after swapping is %d, y is %d and z is %d\n",x,y,z);
    return 0;
}
