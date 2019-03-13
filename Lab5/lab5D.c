/***************************************
* CSE2031 – Lab 5 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 40

void selectionSort(char *str);
int main()
{

    char arr[SIZE];
    fgets(arr, SIZE, stdin);
    while ((*arr != 'q') || (*(arr + 1) != 'u') || (*(arr + 2) != 'i') || (*(arr + 3) != 't'))
    {
        arr[strlen(arr) - 1] = '\0';
        selectionSort(arr);
        printf("%s\n \n", arr);
        fgets(arr, SIZE, stdin);
    }
    return 0;
}

void selectionSort(char *str)
{
    int len = strlen(str) - 1;
    int i, j, min;
    char temp;
    for (i = 0; i <= len; i++)
    {
        min = i;
        for (j = i + 1; j <= len; j++)
        {
            if (*(str + j) < *(str + min))
            {
                min = j;
            }
        }
        temp = *(str + i);
        *(str + i) = *(str + min);
        *(str + min) = temp;
    }
}