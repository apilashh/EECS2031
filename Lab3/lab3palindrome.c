/***************************************
* EECS2031 – Lab3 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* EECS_num: apilashh *
* York Student #: 215700131 *
****************************************/
#include <stdio.h>
#include <string.h>

int length(char []);
int isQuit(char[]);
int isPalindrome(char[]);

int main(){

    char word[] = "";

    do{
        scanf("%s",word);

        if(isPalindrome(word)){
            printf("\nIs a palindrome\n");
        }
        else{
            printf("\nIs not a palindrome\n");
        }

    }while(!isQuit(word));

    return 0;
}

int length(char word[]){
    int i = 0; 
    
    while(word[i] != '\0'){
        i++;
    }
    return i;
}

int isQuit(char word[]){
    char quit[] = "quit";
    
    return !strcasecmp(word, quit);
}

int isPalindrome(char word[]){
    int count = 1;
    int l = length(word);

    for(int i = 0; i < l; i++){
        printf("%c", word[l-1-i]);
        if(word[i] != word[l-1-i]){
            count = 0;
        }
    }
    return count;
}