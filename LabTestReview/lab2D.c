#include <stdio.h>


int main(){

    char c;
    int arr[10] = {0};
    int i;
    c = getchar();

    while(c != EOF){

        if(c >= '0' && c <= '9')
            arr[c - '0']++;
    
    c = getchar();
    }
    for(i = 0; i < 10; i++){
        printf("%d: %d\n",i,arr[i]);
    }
    return 0;
}