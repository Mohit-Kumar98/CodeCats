#include<stdio.h>
int main()
{
    int x,i,rev=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    for (i=x; i!=0;i=i/10)
    {
        rev=i%10;
        printf("%d",rev);
    }
    return 0;
}
