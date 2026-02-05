// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.

#include <stdio.h>

int main(){
int length,width;
int area;
printf("Enter the length and width:");
scanf("%d %d",&length,&width);
area=length*width;
printf("The area of rectangle is %d",area);
return 0;
}
