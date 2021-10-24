#include<stdio.h>
int main()
{

    int x,n2000,n500,n100,n50,n20,n10,n5,n2,n1;   
    printf("Enter The Amount:");
    scanf("%d",&x);

    printf("Total number of notes = \n");
    if(x>=2000)
    {
    n2000=x/2000;
    x-=n2000*2000;
    printf("2000 = %d\n", n2000);
    }
    if(x>=500)
    {
    n500=x/500;
    x-=n500*500;
    printf("500 = %d\n", n500);
    }
    if(x>=100)
    {
    n100=x/100;
    x-=n100*100;
    printf("100 = %d\n", n100);
    }
    if(x>=50)
    {
    n50=x/50;
    x-=n50*50;
    printf("50 = %d\n", n50);
    }
    if(x>=20)
    {
    n20=x/20;
    x-=n20*20;
    printf("20 = %d\n", n20);
    }
    if(x>=10)
    {
    n10=x/10;
    x-=n10*10;
    printf("10 = %d\n", n10);
    }
    if(x>5)
    {
    n5=x/5;
    x-=n5*5;
    printf("5 = %d\n", n5);
    }
    if(x>2)
    {
    n2=x/2;
    x-=n2*2;
    printf("2 = %d\n", n2);
    }
    if(x>=1)
    {
    n1=x;
    printf("1 = %d\n", n1);
    }
    return 0;
   }