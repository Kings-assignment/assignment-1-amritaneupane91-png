// for the final project I am creating a calendar application

#include <stdio.h>

// Step 1: firstly we will check if the given year is leap or not
int isLeapYear(int year)
{
    // this returns 1 if leap year and 0 if not
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Step 2: Function to get the number of days in a month
int getDaysInMonth(int month, int year)
{
    switch (month)
    {
        case 2:
            return isLeapYear(year) ? 29 : 28; // checking February with leap year
        case 4: case 6: case 9: case 11:
            return 30; // April, June, September, November
        default:
            return 31; // remaining months
    }
}

// Step 3: Function to get the starting day of the month
int getStartDay(int month, int year)
{
    // using Zeller's Congruence formula

    if (month < 3)
    {
        month += 12;
        year--;
    }

    int q = 1; // first day of month
    int m = month;
    int k = year % 100;
    int j = year / 100;

    int h = (q + (13*(m + 1))/5 + k + (k/4) + (j/4) + (5*j)) % 7;

    return (h + 6) % 7; // converting result so Sunday = 0
}

// Step 4: Function to print the calendar
void printCalendar(int month, int year)
{
    char *months[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int days = getDaysInMonth(month, year); // total days in month
    int startDay = getStartDay(month, year); // starting day

    // printing heading
    printf("\n     %s %d\n", months[month], year);
    printf(" Su  Mo  Tu  We  Th  Fr  Sa\n");

    // printing spaces before first day
    for (int i = 0; i < startDay; i++)
    {
        printf("    ");
    }

    // printing all days
    for (int day = 1; day <= days; day++)
    {
        printf("%3d ", day);

        if ((startDay + day) % 7 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");
}

// Step 5: main function (entry point)
int main()
{
    int month, year;

    // taking input from user
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    // calling the function to display calendar
    printCalendar(month, year);

    return 0;
}