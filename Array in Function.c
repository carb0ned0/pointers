#include <stdio.h>
#include <stdlib.h>

void printArray(int*,int*,int*);    // "int A[]" and "int A" are same
void Double(int*,int*,int*);        // Using call By Reference of "size" and "i"
int Sum(int*,int*,int*,int*);       // Using call By Reference of "sum"

void Double(int *A, int *size,int *i)
{
    *i = 0;
    for(*i=0; *i<*size; (*i)++)     // It has Difficulty in "*i++" and
    {                               // works fine with "(*i)++"
        A[*i] = 2 * A[*i];
    }
}
int Sum(int *A, int *size,int *i,int *sum)
{
    *sum = 0;
    *i = 0;
    for(*i=0; *i<*size; (*i)++)
    {
        *sum+=A[*i];
    }
    return *sum;
}

void printArray(int *A,int *size,int *i)
{
    *i = 0;
    for(*i=0; *i<*size; (*i)++)
    {
        printf("A[%d] = %d\t",*i,A[*i]);
    }
}

int main()
{
    int A[] = {1,2,3,4,5};
    int size,i,sum;

    i = 0;
    sum =0;
    size = sizeof(A)/sizeof(int);

    printf("Normal  : ");
    printArray(A,&size,&i);
    printf("\n");
    printf("Sum Of all Elements int Array: %d",Sum(A,&size,&i,&sum));

    printf("\n\nDoubled : ");
    Double(A,&size,&i);
    printArray(A,&size,&i);
    printf("\nSum Of all Elements int Array: %d\n",Sum(A,&size,&i,&sum));

    return 0;
}
