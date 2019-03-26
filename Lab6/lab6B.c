/***************************************
* CSE2031 – Lab 6 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>
#include <string.h>

#define ROWS 30
#define COLS 50
void exchange(char arr[][50]);
void printArray(char arr[][50], int n);

int main()
{
    int current_row = 0;
    int i =0;
    char inputs[ROWS][COLS];
    printf("Enter String: ");
    fgets(inputs[current_row], 50, stdin);

    while (inputs[current_row][0] != 'x' && inputs[current_row][1] != 'x' && inputs[current_row][2] != 'x')
    {
        current_row++;
        printf("Enter String: ");
        fgets(inputs[current_row], 50, stdin);
    }
    char temp[50];
    printArray(inputs,current_row);
    strcpy(temp, inputs[0]);
    strcpy(inputs[0], inputs[1]);
    strcpy(inputs[1], temp);
    exchange(inputs);
    printf("== after swapping ==\n");
    printArray(inputs,current_row);
    
return 0;
}

void exchange(char arr[][50])
{
    char temp [50];
    strcpy(temp, arr[2]);
    strcpy(arr[2], arr[3]);
    strcpy(arr[3], temp);
    strcpy(temp, arr[4]);
    strcpy(arr[4], arr[5]);
    strcpy(arr[5], temp);
}

void printArray(char arr[][50] , int n){
    int i =0; 
    for(i = 0; i < n; i++){
        printf("[%d]: %s",i, arr[i]);
    }
}