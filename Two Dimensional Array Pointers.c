#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][4];
    int *p = A;

    A[2][3]=45;
    printf("\n\t\tInitializing [int A[3][4];int *p = A;A[2][3]=45;]\n\n");

    printf("                p                : %d         \n",p);
    printf("             A+1, A[1]           : %d, %d     \n",A+1,A[1]);
    printf("        A , A[0], &A[0][0]       : %d, %d, %d \n",A,A[0],&A[0][0]);
    printf("     *(A+1), A[1], &A[1][0]      : %d, %d, %d \n",*(A+1),A[1],&A[1][0]);
    printf("   *(A+1)+2, A[1]+2, &A[1][2]    : %d, %d, %d \n",*(A+1)+2,A[1]+2,&A[1][2]);
    printf(" A[2][3], *(A[2]+3), *(*(A+2)+3) : %d, %d, %d \n",A[2][3],*(A[2]+3),*(*(A+2)+3));

    return 0;
}
