#include <stdio.h>
#include <stdlib.h>

void sum(int*,int*,int*);
void sum(int *pa, int *qb, int *rc)
    {
        printf("\n\tRunning sum()...\n");
        printf("\t\t *pa(pa) : %d(%d)\n",*pa,pa);
        printf("\t\t *qb(qb) : %d(%d)\n",*qb,qb);
        printf("\t\t *rc(rc) : %d(%d)\n",*rc,rc);
        *rc = *pa + *qb;
        printf("\tExiting sum()...\n");
    }

int main()
{
    int a,b,c;
    int *p,*q,*r;

    printf("Running main()...\n");
    printf("Initializing... \n");

    p = &a; q = &b; r = &c;
    *p = 10; *q = 20;

    sum(p,q,r);
    printf("\nContinuing main()...\n");
    printf("Value of a(*p){p} : %d(%d){%d}\n",a,*p,p);
    printf("Value of b(*q){q} : %d(%d){%d}\n",b,*q,q);
    printf("Value of c(*q){r} : %d(%d){%d}\n",c,*r,r);

    return 0;
}
