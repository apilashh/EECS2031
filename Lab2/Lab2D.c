/***************************************
* EECS2031 – Lab2 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* EECS_num: apilashh *
* York Student #: 215700131 *
****************************************/
#include <stdio.h>

int main()
{

    int arr[10] = {0};

    int c = getchar();
    while (c != EOF)
    {

        if (c >= '0' && c <= '9')
        {
            arr[c - '0']++;
        }
        c = getchar();
    }
    for( int i = 0; i < 10; i++){
        printf("%d: %d\n",i,arr[i]);
    }
}