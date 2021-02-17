#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *in = &a;

    printf("\n\t\Initialization (int a = 10;int *in = &a;) \n\n");
    printf("Value  (in)   :  %d\n",in);
    printf("Value (in+1)  :  %d (in + sizeof(a))\n",in+1);
    printf("Value (in+2)  :  %d (in + 2(sizeof(a)))\n",in+2);
    printf("Size of (a)   :  %d Bytes\n",sizeof(a));

    char b = 'a';
    char *ch = &b;

    printf("\n\t\Initialization (char b = 'a';char *ch = &b;) \n\n");
    printf("Value  (ch)   :  %d\n",ch);
    printf("Value (ch+1)  :  %d (ch + sizeof(b))\n",ch+1);
    printf("Value (ch+2)  :  %d (ch + 2(sizeof(b)))\n",ch+2);
    printf("Size of (b)   :  %d Bytes\n",sizeof(b));

    double c = 1764876;
    double *dou = &c;

    printf("\n\t\Initialization (double c = 1764876;double *dou = &c;) \n\n");
    printf("Value  (dou)  :  %d\n",dou);
    printf("Value (dou+1) :  %d (dou + sizeof(c))\n",dou+1);
    printf("Value (dou+2) :  %d (dou + 2(sizeof(c)))\n",dou+2);
    printf("Size of (c)   :  %d Bytes\n",sizeof(c));

    float d = 568.74897;
    float *flo = &d;

    printf("\n\t\Initialization (float d = 568.74897;float *flo = &d;) \n\n");
    printf("Value  (flo)  :  %d\n",flo);
    printf("Value (flo+1) :  %d (flo + sizeof(d))\n",flo+1);
    printf("Value (flo+2) :  %d (flo + 2(sizeof(d)))\n",flo+2);
    printf("Size of (d)   :  %d Bytes\n",sizeof(d));

    return 0;
}
