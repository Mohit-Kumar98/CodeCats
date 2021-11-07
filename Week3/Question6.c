#include<stdio.h>
int main()
{
    int a[20];
    int i,n,x,count=0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter %d elements in the array: ",i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter The Number which you want to count: ");
    scanf("%d", &x);

    
    for(i=0; i<n; i++)
    {
        if(x==a[i])
        count++;
    }
    if(count!=0)
    printf("%d is present %d times in the array",x,count);
    else
    printf("%d is not present in the array",x);
    return 0;
}