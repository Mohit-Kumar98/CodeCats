#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6};
    int *p=x;
    printf("X=%d\n",*p);
    printf("X=%d\n",*(p+0));
    printf("X=%d\n",*(p+1));
    printf("X=%d\n",*(p+2));
    printf("X=%d\n",*(p+3));
    printf("X=%d\n",*(p+5));
    printf("X=%d\n",*(p+6));  //Garbage Value
    return 0;
}