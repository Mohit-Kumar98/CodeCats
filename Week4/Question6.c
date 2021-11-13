#include<stdio.h>
int main()
{
    int x[20],k,n,i,j,count=0;
    printf("Enter the Number of Element in the array:");
    scanf("%d",&n);
    printf("Enter the Element in Array");
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    printf("Enter the Number which you want to Search:");
    scanf("%d",&k);
    for (i=0;i<n;i++)
    {
        if(x[i] == k)
        {
        printf("%d is Present in %d index",k,i);
        count++;
        }
	}
    if(count==0)
    {
     for (i=0;i<n;i++)
    {
        if(x[i]>k)
        {
         j=x[i-1];
         printf("%d is not present but its possible position is index=%d",k,i);
         break;
        }
    }
	return 0;
    }
}
