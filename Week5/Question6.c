//Passing pointer to function
#include<stdio.h>
void fun(int *);
int main()
{
    int x=5;
    fun(&x);
    printf("x=%d",x);
    return 0;
}
void fun(int *p)
{
    *p=55;
}