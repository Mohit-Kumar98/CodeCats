#include<stdio.h>
int main()
{
    int x[20],n,i,j,count,e;
    printf("Enter the Number of Element in the array:");
    scanf("%d",&n);
    printf("Enter the Element in Array");
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);

    for(i=0;i<10;i++)
    {
        count=0;
        e=i;
        for(j=0;j<n;j++)
        {
            if(e==x[j])
            count++;
        }
        printf("Element %d=%d Times\n",e,count);
    }
    return 0;
}