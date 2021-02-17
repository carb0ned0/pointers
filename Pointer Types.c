#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 257 ;
    int *in = &a;

    printf("\n\t\t Initialization [int a = 10;int *in = &a;] \n\n");
    printf("Size of (int)                    : %d Bytes\n",sizeof(int));
    printf("Address   (in)  , Value   (*in)  : %d , %d\n",in,*in);
    printf("Address  (in+1) , Value  *(in+1) : %d , %d\n",in+1,*(in+1));

    char *ch = (char*)in;
    printf("\n\t\t Initialization [char *ch = (char*)in ;] Typecasting : \n\n");

    printf("Size of (char)                   : %d Bytes\n",sizeof(char));
    printf("Address   (ch)  , Value   (*ch)  : %d , %d\n",ch,*ch);
    printf("Address  (ch+1) , Value  *(ch+1) : %d , %d\n",ch+1,*(ch+1));

    printf("\n\t-> (Binary) 0000 0000 1000 0001 = (Decimal) 257");
    printf("\n\t-> (Binary) 0000 0000 1000 0000 = (Decimal) 256");
    printf("\n\t-> (Binary) 0000 0000 0000 0001 = (Decimal) 001\n");

    void *vd = in;
    printf("\n\t\t Initialization [void *vd = in;] No need to Typecast Generic Pointer : \n\n");

    printf("Size of (void)                   : %d Bytes\n",sizeof(void));
    printf("Address  (vd) , Value  (*vd)     : %d ",vd);
    printf("\n\t-> We cannot do value Manipulation with1 Pointer to void.\t!!\n");

    return 0;
}
