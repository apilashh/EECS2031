/***************************************
* CSE2031 – Lab 6 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>


int getSum(char *[], int n);
int getSumP(char **, int n);
int main(int argc, char *argv[]){


    int i;

    printf("%d arguments excluding \"a.out\"\n",argc - 1);

    printf("%d",atoi(*(argv+1)));
    for(i = 2; i < argc; i++){
        printf(" + %d",atoi(*(argv+i)));
    }
    printf("\n= %d", getSum(argv,argc));
    printf("\n= %d", getSumP(argv,argc));
    return 0;
}

int getSum(char *arr[], int n){
    int i;
    int sum = 0;
    for(i = 0; i < n; i++){
        sum += atoi(*(arr+i));
    }
    return sum;

}

int getSumP(char **arr, int n){
    int i;
    int sum = 0;
    for(i = 0; i < n; i++){
        sum += atoi(*(arr+i));
    }
    return sum;

}