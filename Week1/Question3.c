#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter First Number:");
    scanf("%d",&x);
    printf("Enter Second Number:");
    scanf("%d",&y);
    printf("Enter First Number:");
    scanf("%d",&z);
    if(x||y||z!=0)
    { 
    if(x>y && x>z)
    printf("%d is Greater",x);
    if(y>x && y>z)
    printf("%d is Greater",y);
    if(z>x && z>y)
    printf("%d is Greater",z);
    }
    else
    printf("Please Enter Non Zero Number");
    return 0;
}