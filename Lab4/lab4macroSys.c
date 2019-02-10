/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4macroSys.c *
* Author: Thiruchelva, Apilash *
* Email:  t.apilash@hotmail.com*
* eecs_username: apilashh *
* York num: 215700131
****************************************/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
#define CUBE(x)  (x) * (x) * (x);


int main(int argc, char *argv[])
{
    int arr[10];
    int i=4; 
    int j = 3;

    int ii= CUBE(i);
    printf("%d -> %d\n", i, ii);

    ii = CUBE(j);
    printf("%d -> %d\n", j, ii);

    ii = CUBE(i+j);
    printf("%d -> %d\n", i+j, ii);

    printf("This is file %s, line %d, run on  %s %s\n",__FILE__, __LINE__,__DATE__, __TIME__);
  
    system("ls -l");

    system("mkdir xxx");
  
    printf("%s", "\n");

    system("mkdir xxx/xxx2");

    system("ls -lR"); 


    return 0;
}