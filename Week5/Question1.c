#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;
    printf("Value at x=%d\n",x);
    printf("Value at x=%d\n",*p);
    printf("Address of x=%d\n",&x);
    printf("Address of p=%d\n",p);
    printf("Address of p=%d\n",&p);
    return 0;
}