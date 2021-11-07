#include<stdio.h>
int main()
{
    int a[20];
    int i, n, sum=0,en=0,on=0,ep=0,op=0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter %d elements in the array: ",i+1);
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
        if(a[i]%2==0)
        en=en+a[i];
        else
        on=on+a[i];

        if(i%2==0)
        ep=ep+a[i];
        else
        op=op+a[i];

    }
    printf("Sum of all elements of array = %d\n", sum);
    printf("Sum of Even Number is  = %d\n", en);
    printf("Sum of Odd Number is  = %d\n", on);
    printf("Sum of Even Position is  = %d\n", ep);
    printf("Sum of Odd Position is  = %d", op);

    return 0;
}