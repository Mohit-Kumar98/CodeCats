#include<stdio.h>
int main ()
{
    int x[20],k,n,i;
    printf("Enter the Number of Element in the array:");
    scanf("%d",&n);
    printf("Enter the Element in Array");
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    printf("Enter the Value of K:");
    scanf("%d",&k);
    printf("\nArray before rotation=");
    printf("{");
    for(i=0;i<n;i++)
    printf("%d ",x[i]);
    printf("}");
    printf("\nArray After rotation=");
    printf("{");
    for(i=0;i<n;i++)
    printf("%d ",x[(i+(n-k))%n]);
    printf("}");
    return 0;
}