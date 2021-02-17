#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p;

    a = 10;
    p = &a;
    printf("\n\t\Initialization (a = 10;p = &a;) \n\n");

    printf("Address : %d(p) & %d(&a) \n",p,&a);
    printf("Value   : %d(*p) & %d(a) \n",*p,a);

    *p = 20;
    printf("\n\t\Modified (*p = 20;)\n\n");

    printf("Address        : %d(p) & %d(&a) \n",p,&a);
    printf("Modified Value : %d(*p) & %d(a) \n",*p,a);

    return 0;
}
