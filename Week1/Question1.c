#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Number:");
    scanf("%d",&x);
    
    if(x%2)
    printf("Number is Odd:%d",x);
    else
    printf("Number is Even:%d",x);

    return 0;
}