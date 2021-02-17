#include <stdio.h>
#include <stdlib.h>

void Print(char *);
void Print(char *C)
{
    while(*C != "\0")
    {
        printf("%c",*C);
        C++;
    }
    printf("\n");
}

int main()
{
    char C[20] = "Hello";
    Print(C);

    return 0;
}
