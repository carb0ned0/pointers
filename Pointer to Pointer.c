#include <stdio.h>
#include <stdlib.h>

int main()
{
    int    a;
    int*   p;   //  equal to : int   *p;
    int**  q;   //  equal to : int  **q;
    int*** r;   //  equal to : int ***r;
    a = 10;
    p = &a;
    q = &p;
    r = &q;

    printf("\t Initialization [int a; int *p; int **q; int ***r;]\n");
    printf("\t Deceleration [a = 10; p = &a; q = &p; r = &q;]\n");

    printf("   a  : %d\n",a);

    printf("  *p  : %d\n",*p);
    printf("  *q  : %d\n",*q);
    printf("  *r  : %d\n",*r);

    printf("  **q : %d\n",**q);
    printf("  **r : %d\n",**r);

    printf(" ***r : %d\n",***r);

    return 0;
}
