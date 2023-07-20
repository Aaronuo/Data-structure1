#include<stdio.h>
// #include "string.h"
#include "status.h"

int main()
{
    //SString String11[10]=0;
    int a[6]={1,3,5,7,9,11};
    int *b= a;// + sizeof(int);
    printf("%d",*b+sizeof(int));
    return 0;
}
