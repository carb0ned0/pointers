#include <stdio.h>
#include <stdlib.h>
void A()
{
    printf("Hello");
}

void B(void (*ptr)())
{
    ptr();
}

int main()
{
    B(A);               // void (*p)() = A;      B(p);

    return 0;
}
