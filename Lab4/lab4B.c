/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4B.c *
* Author: Thiruchelva, Apilash *
* Email:  t.apilash@hotmail.com*
* eecs_username: apilashh *
* York num: 215700131
****************************************/
#include <stdio.h>
#include <math.h> /* for pow() */
#include <string.h>
#define SIZE 10
int my_atoi(char c[]); /* function declaration */
int isQuit(char cp[]);
int main()
{
    int a, b;
    char arr[SIZE];

    printf("Enter a postive number or 'quit': ");
    scanf("%s", arr);
    while (isQuit(arr) == 0)
    {
        printf("%s\n", arr);

        a = atoi(arr);
        printf("atoi:    %d (%#o, %#X)\t%d\t%.0f\n", a, a, a, a * 2, pow(a, 2));

        b = my_atoi(arr);
        printf("my_atoi: %d (%#o, %#X)\t%d\t%.0f\n", b, b, b, b * 2, pow(b, 2));

        /* read again */
        printf("Enter a postive number or 'quit': ");
        scanf("%s", arr);
    }

    return 0;
}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi(char c[])
{
    double num = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        int letter = c[strlen(c) - 1 - i] - '0';

        num = num + letter * pow(10, i);
        //printf("%d: %d, %d, %f\n", i, num, letter, letter*pow(10,i));1
    }

    return num;
}
int isQuit(char c[])
{
    int true;
    char quit[] = {'q', 'u', 'i', 't'};
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == quit[i])
        {
            true = 1;
        }
        else
        {
            true = 0;
            break;
        }
    }
    return true;
}
