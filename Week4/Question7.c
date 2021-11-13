#include<stdio.h>
int main()
{
    int t;
    printf("Enter the number of test cases:");
    scanf("%d",&t);
    
        while(t--)
        {
            int n,x,i,y,z=0;
            printf("Enter the coordinate of the grasshopper's initial position and the number of jumps:");
            scanf("%d%d",&x,&n);
            y=n%4;
            if(y==1)
            z=-n;
            else if(y==2)
            z=1;
            else if(y==3)
            z=n+1;
            if(x&1)
            printf("%d\n",x-z);
            else
            printf("%d\n",x+z);
                 
        }
    return 0;
}