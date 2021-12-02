#include<stdio.h>
int main()
{
    int n,copyn,flag=0;
    printf("Input a number:");
    scanf("%d",&n);
    copyn=n;
    while(n>0)
        {
            if(n%10==0)
            {
            flag=1;
            break;
            }
			n/=10;
        }
            if(copyn>0 && flag==1)
            {
             printf("It is a Duck Number.\n");
            }
            else
            {
             printf("It is not a Duck Number.\n");
            }
    return 0;
}
