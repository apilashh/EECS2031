/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4E.c *
* Author: Thiruchelva, Apilash *
* Email:  t.apilash@hotmail.com*
* eecs_username: apilashh *
* York num: 215700131
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30
#define SIZE 20
int isQuit(char c[]);
int main(int argc, char *argv[])
{
    char inputs_table[ROWS][COLUMNS];
    int age; 
    int j = 0;
    int count = 0;
    char name[SIZE], new_name[SIZE];
    float wage;
    printf("Enter name age and wage: ");
    scanf("%s %d %f", name, &age, &wage);

    while (isQuit(name) == 0)
    {
        for (int i = 0; i < sizeof(name); i++)
        {
            new_name[i] = toupper(name[i]);
        }
        int new_age = age + 10;
        double new_wage = wage * 1.5;

        sprintf(inputs_table[j], "%s %d %.2f", name, age, wage);
        sprintf(inputs_table[j + 1], "%s %d %.2f", new_name, new_age, new_wage);

        count++;
        /* read again  */
        printf("Enter name age and wage: ");
        scanf("%s %d %f", name, &age, &wage);
        /* now display the input_table row by row */
        j+=2;
        
    }
    printf("\nRecords generated in %s on %s %s\n",__FILE__,__DATE__,__TIME__);
    for(j = 0; j< (2*count); j++){
        printf("%s\n",inputs_table[j]);
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