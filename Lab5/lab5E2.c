/***************************************
* CSE2031 – Lab 5 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x,int len);
void display(int *arr, int len);

int main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array,count);

     
     
     printf("\nLargest value: %d\n", largest(array,count));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr, int len)
 {
        int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr, int len)
 {
    int i; 
    int max = 0;
    for(i = 0; i < len; i++){
        if(*(arr+i) > max){
            max = *(arr+i);
        }
    }
    return max;
 }
