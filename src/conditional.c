//Write a orogram that checks if a number is positive or not.

#include <stdio.h>

int main() {
int num;

printf("Enter a number:");
scanf("%d", &num);

if (num>0){
    printf("Number is positive.\n");
 } else if (num<0){
    primtf("Number is negative.\n");
 }else {
    printf("Number is zero.\n");
 }
      
    return 0;
}
