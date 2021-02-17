#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[] = {1,2,3,4,5};

    for(int i=0; i<5 ; i++)
    {
        printf("A+%d    : %d\n",i,A+i);
        printf("&A[%d]  : %d\n",i,&A[i]);
        printf("A[%d]   : %d\n",i,A[i]);
        printf("*(A+%d) : %d\n",i,*(A+i));
    }

    return 0;
}
