/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4C.c *
* Author: Thiruchelva, Apilash *
* Email:  t.apilash@hotmail.com*
* eecs_username: apilashh *
* York num: 215700131
****************************************/
#include <stdio.h>
#include <string.h>
int isQuit(char c[]);
int isLeap(int year);
int countDays(int y, int m, int d);
int main()
{

    char input[30];
    int i;
    int dates;
    int day, year, month;

    printf("Enter 'month-day year' : ");
    fgets(input, 30, stdin); /* read in the whole line */

    while (isQuit(input) == 0)
    {
        /* manipulate the input, count days and display */
        sscanf(input, "%d-%d %d", &month, &day, &year);
        printf("%d days of year %d have elapsed\n", countDays(year, month, day), year);
        // read again
        printf("Enter 'month-day year': ");
        fgets(input, 30, stdin); /* read in the whole line */
    }

    return 0;
}

int countDays(int y, int m, int d)
{
    int num_days = 0;
    for (int i = m-1; i > 0; i--)
    {
        if (i == 2)
        {
            if (isLeap(y) == 1)
                num_days += 29;
            else
                num_days += 28;
        }
        else if ( i % 2 == 0)
            num_days += 30;
        else if(m == 1){

        }else
            num_days += 31;
    }
    num_days += d;
    return num_days;
}

int isQuit(char c[])
{
    int true;
    char quit[] = {'q', 'u', 'i', 't'};
    for (int i = 0; i < strlen(c)-1; i++)
    {
        if (c[i] == quit[i])
            true = 1;
        else
            true = 0;
    }
    return true;
}
