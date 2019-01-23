/***************************************
* EECS2031 – Lab2 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* EECS_num: apilashh *
* York Student #: 215700131 *
****************************************/
#include <stdio.h>

int isLeap(int);

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    while (year > 0)
    {

        if (isLeap(year) == 1)
        {
            printf("Year %d is a leap year\n", year);
        }
        else
        {
            printf("Year %d is not a leap year\n", year);
        }
        printf("Enter a year: ");
        scanf("%d", &year);
    }

    return 0;
}

int isLeap(int year)
{
    int val;
    if (year % 4 != 0)
    {
        val = 0;
    }
    else if (year % 100 != 0)
    {
        val = 1;
    }
    else if (year % 400 != 0)
    {
        val = 0;
    }
    else
    {
        val = 1;
    }
    return val;
}