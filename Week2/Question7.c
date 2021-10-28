#include <stdio.h>
int main() 
{
	int x,i,new=0;
    printf("Factorial:");
	scanf("%d",&x);
	for(i=x;i>5;i=i/5)
    {
        new=new+i/5;
    }
	printf("%d",new);
	printf("\n");
	return 0;
}