#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    sum=sum+i;
    printf("The First %d natural number is\n",x);
    for(i=1;i<=x;i++)
    printf("%d\t",i);
    printf("\nThe Sum of Natural Number upto %d terms: %d",x,sum);
    return 0;
}

