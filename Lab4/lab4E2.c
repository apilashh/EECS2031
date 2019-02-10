/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4E2.c *
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
    char input_table[ROWS][COLUMNS];

    int current_row = 0;

    int age;
    float wage;
    char name[SIZE], new_name[SIZE];
    int count = 0;

    printf("Enter name age and wage: ");
    fgets(input_table[current_row], 30, stdin); // add a /n
    input_table[current_row][strlen(input_table[current_row])-1] = '\0'; //remove \n
    sscanf(input_table[current_row], "%s %d %f", name, &age, &wage);
    while (isQuit(name)== 0)
    {
        for (int i = 0; i < sizeof(name); i++)
        {
            new_name[i] = toupper(name[i]);
        }
        int new_age = age + 10;
        double new_wage = wage * 1.5;

        sprintf(input_table[current_row + 1], "%s %d %.2f", new_name, new_age, new_wage);
        current_row+=2;

        printf("Enter name age and wage: ");
        fgets(input_table[current_row], 30, stdin);
        input_table[current_row][strlen(input_table[current_row])-1] = '\0';
        sscanf(input_table[current_row], "%s %d %f", name, &age, &wage);
    }

    printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
    for(int i = 0; i < current_row; i++){
        printf("%s\n", input_table[i]);
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