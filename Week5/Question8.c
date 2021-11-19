#include<stdio.h>
int *f1();
int main()
{
    int *p;
    int a[]={1,2,3};
    p=f1(a);
    printf("\n Value at p=%d",*p);
    return 0;
}
int *f1(int *q)
{
    printf("\n Value at index 0=%d",q[0]);
    return q+1;

}