#include<stdio.h>
int main()
{
    int x,i,fac=1;
    printf("Enter the number :");
    scanf("%d",&x);
    for(i=x;i>0;i--)
    fac=fac*i;
    printf("The Factorial of %d is: %d",x,fac);
    return 0;
}


