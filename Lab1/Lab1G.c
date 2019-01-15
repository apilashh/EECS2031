#include <stdio.h>

/* copy the user input to output */

int main()
{
    int x = 0;
    int count = 0;
    int c = getchar();
    while (c != EOF)
    {
        //c = getchar();
        if (c != '\n')
            x++;
        else
            count++;
    
            c = getchar();
    }
    printf("# of chars: %d\n", x);
    printf("# of lines: %d\n", count);
    return 0;
}