#include <stdio.h>

#define SIZE 20
int my_length(char[]);
int isPalindrome(char[]);
int main()
{

    char word[SIZE];
    int i;
    printf("Enter word: ");
    scanf("%s", word);
    printf("%s\n", word);
    for (i = 0; i < my_length(word); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] += 32;
    }

    while (word[0] != 'x' || word[0] != 'X')
    {

        if (isPalindrome(word) == 1)
            printf("Palindrome\n");

        else
            printf("Not Palindrome\n");

        printf("Enter word: ");
        scanf("%s", word);

        for (i = 0; i < my_length(word); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
                word[i] += 32;
        }
    }

    return 0;
}

int my_length(char ch[])
{
    int count = 0;
    while (ch[count] != '\0')
        count++;

    return count;
}

int isPalindrome(char ch[])
{

    int choice = 1;
    int i;
    for (i = 0; i < my_length(ch); i++)
    {
        printf("%c", ch[my_length(ch) - 1 - i]);
        if (ch[i] != ch[my_length(ch) - 1 - i])
            choice = 0;
    }
    printf("\n");
    return choice;
}