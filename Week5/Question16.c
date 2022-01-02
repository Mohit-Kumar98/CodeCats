#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x,y;
    printf("Enter The Value of X,Y:");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("After Swapping:\n");
    printf("Value of X:%d and Y:%d",x,y);
    return 0;
}