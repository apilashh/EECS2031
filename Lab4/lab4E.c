
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
    char name[SIZE], new_name[SIZE];
    float wage;
    int num_rows = 0;
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
        /* read again  */
        printf("Enter name age and wage: ");
        scanf("%s %d %f", name, &age, &wage);
        printf("\nrecords generated %s %s %s\n", , , );
        /* now display the input_table row by row */
        num_rows++;
        return 0;
    }
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