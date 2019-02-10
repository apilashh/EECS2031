/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4D.c *
* Author: Thiruchelva, Apilash *
* Email:  t.apilash@hotmail.com*
* eecs_username: apilashh *
* York num: 215700131
****************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define SIZE 10
#define SIZE2 40
int isQuit(char c[]);
int main(int argc, char *argv[])
{

    char name[SIZE], wage[SIZE], age[SIZE];
    char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];
    char new_name[SIZE];
    double floor_wage, ceil_wage;
    printf("Enter name, age and wage (xxx to quit): ");
    scanf("%s %s %s", name, age, wage);

    while (isQuit(name) == 0)
    {
        int new_age = atoi(age) + 10;
        double new_wage = atof(wage) * 2.0;
        ceil_wage = ceilf(new_wage);
        floor_wage = floorf(new_wage);

        for(int i = 0; i < sizeof(name); i++){
            new_name[i] = name[i];
    }
        new_name[0] = toupper(new_name[0]);

        sprintf(resu, "%s-%d-%.3f-[%.0f, %.0f]", new_name, new_age, new_wage, floor_wage, ceil_wage);
        strcpy(resu2, resu);
        sprintf(resu3, "%s", resu2);
        /* use scanf to read again */
        printf("%s\n%s\n%s\n",resu,resu2,resu3);

        printf("Enter name, age and wage (xxx to quit): ");
        scanf("%s %s %s", name, age, wage);
    }
    return 0;
}
int isQuit(char c[])
{
    int true;
    char quit[] = {'x', 'x', 'x'};
    for (int i = 0; i < strlen(c) - 1; i++)
    {
        if (c[i] == quit[i])
            true = 1;
        else
            true = 0;
    }
    return true;
}
