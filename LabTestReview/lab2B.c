#include <stdio.h>


int main(){

    char c;

    printf("Enter word fucking faggot: ");
    c = getchar();

    while(c != EOF){

        if(c >= 'a' &&  c <= 'z')
            c = c-32;
        
        putchar(c);
        c = getchar();
    }


    return 0;
}