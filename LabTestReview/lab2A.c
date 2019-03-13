#include <stdio.h>


int main(){

    int a,num,sum;
    char b;
    printf("Enter an integer and a character seperated by: ");
    scanf("%d %c", &a,&b);

    while(a != -1000){

        if(b >= '0' && b <= '9'){
            num = b - '0';
            sum = a + num;
            printf("sum: %d" , sum);
        }
        else{
            printf("Character '%c' does not represent a digit:",b);
        }

        printf("Enter an integer and a character seperated by: ");
        scanf("%d %c", &a,&b);
    }




    return 0; 
}