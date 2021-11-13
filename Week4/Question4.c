#include<stdio.h>
int main ()
{
    int x[20],t,n,i,j;
    printf("Enter the Number of Element in the array:");
    scanf("%d",&n);
    printf("Enter the Element in Array");
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
     printf("Enter the Target:");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]+x[j]==t)
            printf("[%d,%d]",i,j);
        }
    }
    return 0;
}