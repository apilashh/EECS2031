/***************************************
* CSE2031 – Lab 6 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>
#include <string.h>

void printArray(char **, int);
void exchange(char *[]);

main()
{

    char *inputs[8] = {"this is input 0, giraffes", "this is input 1, zebras", "this is input 2, monkeys",
                       "this is input 3, kangaroos"};

    char arr1[] = "this is input 4, do you like them?";
    char arr2[] = "this is input 5, yes";
    char arr3[] = "this is input 6, thank you";
    char arr4[] = "this is input 7, bye";

    inputs[4] = arr1;
    inputs[5] = arr2;
    inputs[6] = arr3;
    inputs[7] = arr4;

    // display the array by calling printArr
    printArray(inputs, 8);

    char * temp;
    temp = inputs[0];
    inputs[0] = inputs[1];
    inputs[1] = temp;
    // swap pointee of first and second

    // call exchange() to swap some other 'rows';
    exchange(inputs);
    printf("===========================\n");
    printArray(inputs, 8);
    // display the array again
}

void printArray(char *arr[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("[%d] -*-> %s\n", i, *(arr + i));
    }
}
void exchange(char *arr[])
{
    char * temp;
    temp = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;

    temp = arr[4];
    arr[4] = arr[5];
    arr[5] = temp;
}