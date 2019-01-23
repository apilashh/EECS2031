/***************************************
* EECS2031 – Lab2 *
* Author: Thiruchelva, Apilash *
* Email: t.apilash@hotmail.com *
* EECS_num: apilashh *
* York Student #: 215700131 *
****************************************/
#include <stdio.h>

#define SIZE 20
int length(char word[]);
int indexOf(char word[],char);
int isQuit(char word[]);
int main()
{

    char charArr[SIZE];
    char c;
    do
    {
        printf("Enter a word and a character seperated by blank: ");
        scanf("%s %c", charArr, &c);
        int index = indexOf(charArr, c);
        int len = length(charArr);
        if(isQuit(charArr) != 1)
            printf("Input word is \"%s\". Contains %d characters. Index of '%c' in it is %d\n", charArr, len, c, index);

    } while (isQuit(charArr) != 1);
    return 0;
}
int length(char word[])
{
    int a = 0;
    while (word[a] != '\0')
    {
        a++;
    }
    return a;
}

int indexOf(char word[], char c)
{
    int index = -1;
    for (int i = 0; i < length(word); i++)
    {
        if (c == word[i]){
            index = i;
            break;
        }
    }
    return (index);
}
int isQuit(char word[])
{
    int true;
    char quit[] = {'q', 'u', 'i', 't'};
    for (int i = 0; i < length(word); i++)
    {
        if (word[i] == quit[i])
        {
            true = 1;
        }
        else
        {
            true = 0;
        }
    }
    return true;
}