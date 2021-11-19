#include<stdio.h>
int main()
{
    int x=10;
    int *p=&x;
    printf("X=%d and *p=%d\n",x,*p);
    x=20;
    printf("X=%d and *p=%d\n",x,*p);
    *p=30;
    printf("X=%d and *p=%d\n",x,*p);
    (*p)++;
    printf("X=%d and *p=%d\n",x,*p);
    x=x+10;
    printf("X=%d and *p=%d\n",x,*p);
    *p=(*p)+10;
    printf("X=%d and *p=%d\n",x,*p);

    return 0;
}