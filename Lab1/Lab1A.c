/***************************************
* EECS2031Z – Lab1 *
* Filename: Lab1A *
* Author: Thiruchelva, Apilash *
* Email: apilashh@my.yorku.ca *
* eecs_username: apilashh *
* York Student #: 215700131
****************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int year; int month; int day;
    printf("Enter month, day, year separated by spaces: ");
    scanf("%d%d%d",&month,&day,&year);

    printf("The input '%d %d %d' is reformmated as %d/%d/%d and %d-%d-%d",month, day, year, year, month, day, year, month, day);
    return 0;
}