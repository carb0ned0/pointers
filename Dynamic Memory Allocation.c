#include <stdio.h>
#include <stdlib.h>
void Printing(int *,int *);
void Initializing(int *,int *);

void Printing(int *a,int *n)
{
    printf("\n\nPrinting all the Elements in Array : \n");
    for(int i=0; i<*n ; i++)
    {
        printf("\n\tArrray[%d] : %d",i,*(a+i));
    }
}

void Initializing(int *a,int *n)
{
    printf("Initializing all the Elements in Array...");
    for(int i=0; i<*n ; i++)
    {
        *(a+i) = rand() % 100;          // Random no. b/w 0 to 101
    }
}

int main()
{
    int *p,*p2,no,newNo;
    time_t Time;
    srand((unsigned) time(&Time));      // For working of rand()

    printf("Enter a Number : ");
    scanf("%d",&no);
    p = (int*)malloc(sizeof(int));      // Create 4 Bytes of memory in Heap memory
    *p = no;
    printf("Value of p for now : %d \n",*p);
    free(p);
    printf("Memory of (p) is Free now.\n");

    printf("\nEnter no. of Elements to Create in Array : ");
    scanf("%d",&no);                    // Create (no)X (size of int)4 Bytes of memory and
    p = (int*)calloc(no,sizeof(int));   // Initialize all the Elements to their default Value in Heap memory

    Initializing(p,&no);
    Printing(p,&no);

    newNo = no/2;
    printf("\n\nDoubling the Size of Array form %d to %d.\n",no,newNo);
    p2 = (int*)realloc(p,newNo*sizeof(int));
    free(p);
    Initializing(p2,&newNo);
    Printing(p2,&newNo);

    printf("\n\nThe Privious One : ");
    Printing(p,&no);

//    printf("\nI think you are getting good with Pointers :)");
    printf("\n");

    return 0;
}
