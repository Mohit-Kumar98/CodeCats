#include<stdio.h>
int main()
{
    int x;
    int *p=&x;
    printf("X=%d\n",p);
    printf("X=%d\n",p+1);
    printf("X=%d\n",p+2);
    return 0;
}