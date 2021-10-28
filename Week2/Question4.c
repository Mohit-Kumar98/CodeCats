#include<stdio.h>
int main()
{
    int x,i,num;
    printf("Enter the Number:");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
         if(x%i==0)
         break;
    }
    if(i==x)
    printf("Prime Number");
    else
    printf("Not Prime Number");
    return 0;
}


