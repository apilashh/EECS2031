/***************************************
* EECS2031 – Lab2 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* EECS_num: apilashh *
* York Student #: 215700131 *
****************************************/
#include <stdio.h>


int isLowerCase(char);

int main()
{

    char c = getchar();

    while (c != EOF)
    {
        if(isLowerCase(c) == 1)
            c = c - 32;

        putchar(c);
        c = getchar();
    }
}

int isLowerCase(char c){
    if(c >= 'a' && c<='z')
        return 1;
    
    return 0;
}