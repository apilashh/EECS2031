/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4F.c *
* Author: Thiruchelva, Apilash *
* Email:  t.apilash@hotmail.com*
* eecs_username: apilashh *
* York num: 215700131
****************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{

    int age = 10;
    int age2 = 100;
    int *ptr;
    int *ptr2;

    ptr = &age;

    printf("age: %d %d\n", age, *ptr);

    *ptr = 14;
    printf("age: %d %d\n", age, *ptr);

    ptr2 = &age2;

    *ptr2 = age;
    printf("age2:%d %d\n", age2, *ptr2);
    ptr2 = ptr;

    *ptr2 = age - 1;
    printf("age: %d %d %d\n", age, *ptr, *ptr2);
    printf("%p %p %p\n", &age, ptr, ptr2);
    return 0;
}