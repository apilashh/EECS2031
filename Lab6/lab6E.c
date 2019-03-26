/***************************************
* CSE2031 – Lab 6 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>
#include <stdlib.h>
void printArr(int *, int);

int main()
{
    int *my_array;
    int n, i;
    printf("Size of array: ");
    scanf("%d", &n);
    my_array = (int *)malloc(n * sizeof(int));

    if(my_array == NULL){
        printf("Memory allocation failed!");
        exit(0);
    }
    *my_array = 1;
    for (i = 1; i < n; i++)
        *(my_array + i) = i * 100;

    printArr(my_array, n);
    return 0;
}

void printArr(int *arr, int n)
{
    int i; 
    for( i= 0; i < n; i++){
        printf("%d\n",*(arr+i));
    }
}