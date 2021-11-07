#include<stdio.h>
int main()
{
    int a[20];
    int i,n,small=0,large=0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter %d elements in the array: ",i);
        scanf("%d", &a[i]);
    }

    small=a[0];
    large=a[0];
    for(i=0; i<n; i++)
    {
        if(small>=a[i])
        small=a[i];

        if(large<=a[i])
        large=a[i];

    }
    printf("Smallest Number in an array is %d\n",small);
    printf("largest Number in an array is %d",large);

    return 0;
}