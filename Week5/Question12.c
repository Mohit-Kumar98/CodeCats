#include<stdio.h>
int main()
{
    int x=5;
    int *P=&x;
    int **q=&P;
    int ***r=&q;
    int ****s=&r;

    printf("Value at X:%d\n",****s);
    return 0;
}