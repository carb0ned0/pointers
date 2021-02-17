#include <stdio.h>
#include <stdlib.h>
void thankYou();
int add(int,int);

void thankYou()
{
    printf("\nThank You for checking this useless program!\t:)\n");
}

int add(int x,int y)
{
    return x+y;
}

int main()
{
    int a,b;
    int (*p)(int,int);
    void (*ptr)() = thankYou;
    p = add;                        // (&add) add (add) are same
    printf("Enter no A   : ");    scanf("%d",&a);
    printf("Enter no B   : ");    scanf("%d",&b);
    printf("Value of A+B : %d",(*p)(a,b));
    (*ptr)();

    return 0;
}
