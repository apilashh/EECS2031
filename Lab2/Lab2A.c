/***************************************
* EECS2031 – Lab2 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* EECS_num: apilashh *
* York Student #: 215700131 *
****************************************/

#include <stdio.h>

int isDigit(char);

int main()
{

    char c;
    int d;

    scanf("%d %c", &d, &c);
    while (d != -10000)
    {

        if (isDigit(c) == 1)
        {
            int sum = c-'0' + d;
            c = c-'0';
            printf("Character '%d' represents a digit. Sum of %d and %d is %d\n", c, d, c, sum);
        }
        else
        {
            
            printf("Character '%c' does not represent a digit\n",c);
        }

        scanf("%d %c", &d, &c);
   }
}

int isDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
