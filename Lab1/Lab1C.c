/***************************************
* EECS2031Z – Lab1 *
* Filename: Lab1C *
* Author: Thiruchelva, Apilash *
* Email: apilashh@my.yorku.ca *
* eecs_username: apilashh *
* York Student #: 215700131
****************************************/
#include <stdio.h>

float sum(float, float);

int main()
{
    float x;
    float y;
    printf("Enter two float numbers separated by ##: ");
    scanf("%f##%f", &x, &y);
    float su = sum(x, y);
    printf("%f + %f = %f\n", x, y, su);

    return 0;
}

/* function definition */
float sum(float i, float j)
{
    return i + j;
}