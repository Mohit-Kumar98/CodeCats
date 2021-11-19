#include<stdio.h>
int main()
{
    int x[]={1,2,3,4},i;
    int *p=x;
    *(p+0)=10;
    *(p+1)=20;
    *(p+2)=30;
    *(p+3)=40;
    for(i=0;i<4;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}