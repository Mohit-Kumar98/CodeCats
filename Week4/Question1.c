#include<stdio.h>
 int main() 
{
    int a[20],rev[20],i,n;
 
    printf("Enter no of elements:");    
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for (i=0;i<n;i++) 
    scanf("%d",&a[i]);
 
    for(i=0;i<n;i++)
    rev[i]=a[n-i-1];
 
   printf("Reverse Array:");
   for(i=0;i<n;i++) 
   printf("%d ",rev[i]);
   
   return 0;
}