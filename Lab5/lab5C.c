/***************************************
* CSE2031 – Lab 5 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* eecs_num: apilashh *
* Yorku #: 215700131
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 40

int isPalindrome(char *);
void printReverse(char *);
int main()
{
    int result;
    char c;
    int i;
    int count = 0;
    char arr[SIZE];

    fgets(arr, SIZE, stdin);
    while ((*arr != 'q') || (*(arr + 1) != 'u') || (*(arr + 2) != 'i') || (*(arr + 3) != 't'))
    {
        arr[strlen(arr) - 1] = '\0'; // remove the trailing \n
        // print backward
        printReverse(arr);

        result = isPalindrome(arr);
        if (result == 1)
            printf("\nIs a case-insensitive palindrome.\n\n");
        else
            printf("\nNot a case-insensitive palindrome.\n\n");

        fgets(arr, SIZE, stdin);
    }

    return 0;
}

int isPalindrome(char *str)
{
    int len = strlen(str)-1;
    int i = 0;
    int j = 0;
    int count = 1;

   for(j = 0; j <= len; j++){
        *(str+j) = toupper(*(str+j));
    }
    for (i = 0; i <= len; i++)
    {
        if (*(str + i) != *(str + len - i))
        {
            count = 0;
        }
    }
    return count;
}

// assume the \n was removed manually
void printReverse(char *str)
{
    int i = strlen(str) - 1;
    while (i >= 0)
    {
        printf("%c", *(str + i)); // or  putchar(*(str+i));
        i--;
    }
}
