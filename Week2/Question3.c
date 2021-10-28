#include<stdio.h>
int main()
{
    int x,sum=0,i,r;
    printf("Enter the Number:");
    scanf("%d",&x);
    for(i=x;i!=0;i=i/10)
    {
        r=i%10;
        sum=sum+(r*r*r);  
    }
    if(sum==x)
         printf("%d is an Armstrong number.\n",x);
    else
         printf("%d is not an Armstrong number.\n",x);
    return 0;
}