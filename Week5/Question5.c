#include<stdio.h>
int main()
{
    int x[]={1,2,3};
    int (*p)[3]=&x;
    printf("X=%d\n",&x);
    printf("X=%d\n",p);
    p++;
    printf("X=%d\n",p);
    p++;
    printf("X=%d\n",p);
    return 0;
}