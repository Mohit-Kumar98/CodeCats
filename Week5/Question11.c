#include<stdio.h>
int *f1();
int main()
{
    int *p;
    int a[]={1,2,3};
    p=f1(a);
    printf("\n Value At p=%d",*p);
    return 0;
}
int *f1(int *q)
{
    printf("\n Value At Index 0=%d",q[0]);
    return q;
}