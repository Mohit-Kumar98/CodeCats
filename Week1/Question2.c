#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter First Number:");
    scanf("%d",&x);
    printf("Enter Second Number:");
    scanf("%d",&y);
    if(x||y!=0)
    { 
    if(x>y)
    printf("%d is Greater",x);
    else
    printf("%d is Greater",y);
    }
    else
    printf("Please Enter one Non Zero Number");
    return 0;
}