// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"

#include <stdio.h>
    int main() {
    int number;
    int week,remaining_days;

    printf("Enter a number:");
    scanf("%d",&number);
    week=number/7;
    remaining_days=number%7;
    printf("%d week %d days",week,remaining_days);
    return 0;
}