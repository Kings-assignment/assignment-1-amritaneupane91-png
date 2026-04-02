//Write a program to input a positive number from the user and print it.

#include <stdio.h>

void main() {
int num;

//do{
    //printf("Enter a positive number:");
    //scanf("%d", &num);

//} while (num<=0);

while (1) {
    printf("Enter the positive number:");
    scanf("%d", &num);

    if (num>0){
        break;
    }
}
printf("You entered %d\n", num);

}