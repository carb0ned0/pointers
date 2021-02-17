#include <stdio.h>
#include <stdlib.h>
int* sum(int*,int*);
int* sum(int *x,int *y)
{
    int *c = (int*)malloc(sizeof(int));
    *c = (*x) + (*y);
    return c;
}

int main()
{
    int a,b,c;
    printf("Enter no A   : ");    scanf("%d",&a);
    printf("Enter no B   : ");    scanf("%d",&b);
    printf("Value of A+B : %d",*(sum(&a,&b)));

    return 0;
}
