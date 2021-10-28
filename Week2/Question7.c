
#include <stdio.h>
int main() 
{
	int n;
    printf("Factorial:");
	scanf("%d",&n);
	int i=5, count=0;
	while(n/i>=1)
	{
	    count += n/i;
	    i *= 5;
    }
	printf("%d",count);
	printf("\n");
	return 0;
}