#include<stdio.h>
int main()
{
    int x,p,num=1,i;
    printf("Enter the Number:");
    scanf("%d",&x);
    printf("Enter the Power:");
    scanf("%d",&p);
    for(i=1; i<=p; i++)
    num=num*x;
    printf("%d^%d : %d",x,p,num);
    return 0;
}
