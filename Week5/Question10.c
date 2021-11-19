#include<stdio.h>

int main()
{
	int x[3]={1,2,3};
	int (*p)[3]=&x;
	printf("P=%d *p=%d\n",p,*p);
	p++;
	printf("P=%d *p=%d\n",p,*p);
	return 0;
}