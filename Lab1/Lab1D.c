/***************************************
* EECS2031Z – Lab1 *
* Filename: Lab1D *
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
    int num;
    printf("Enter number of interactions: ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i)
    {
        printf("");
        printf("Enter two float numbers separated by ##: ");
        scanf("%f##%f", &x, &y);
        float su = sum(x, y);
        printf("%f + %f = %f\n", x, y, su);
        printf("");
    }
    return 0;
}

/* function definition */
float sum(float i, float j)
{
    return i + j;
}