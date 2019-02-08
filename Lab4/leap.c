#include <stdio.h>

int isLeap(int year)
{
    if (year % 400 == 0)
        return 1;
    if (year % 4 == 0 && year % 100 != 0)
        return 1;

    return 0;
}