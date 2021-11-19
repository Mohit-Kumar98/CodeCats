#include<stdio.h>
void Calculation(int,int,int *,int *);
int main()
{
    int x=20,y=5;
    int *sum,*sub;
    Calculation(x,y,&sum,&sub);
    printf("Addition of two number:%d\n",sum);
    printf("Subtraction of two number:%d\n",sub);
    return 0;
}
void Calculation(int x,int y,int *p,int *q)
{
    *p=x+y;
    *q=x-y;
}