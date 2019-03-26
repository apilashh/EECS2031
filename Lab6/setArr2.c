/***************************************
* CSE2031 – Lab 6 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>

void setArr(int, int);

int *arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
   int i;

   setArr(0, 0);
   setArr(1, 100);
   setArr(2, 200);
   setArr(3, 300);
   setArr(4, 400);

   for (i = 0; i < 5; i++)
      printf("arr[%d] -*-> %d\n", i, *arr[i]); /* should be 0,100, 200,300,400 */
   return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr(int index, int v)
{
   int i = v;
   arr[index] = &i;
}

// Output: a[0] -*-> 400
// The other values were random garbage values
// The local variable i exists in stack memory, meaning
// the memory allocated by i is deallocated when the function 
// exits. So it is filled with random values. 