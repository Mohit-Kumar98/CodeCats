#include<stdio.h>
int main()
{
int t;
printf("Enter Test Case:");
scanf("%d",&t);
while(t--)
{int g;
 printf("Enter number of games played by Elephant:");
 scanf("%d",&g);
 while(g--)
 {int i,n,q;
  printf("Enter initial state of the coins(1=Head/2=Tail):");
  scanf("%d",&i);
  printf("Enter the number of coins and rounds");
  scanf("%d",&n);
  printf("Enter the (1/2)\n1.means Elephant needs to guess the total number of coins showing Head in the end of the game\n2.means Elephant needs to guess the total number of coins showing Tail in the end of the game\n");
  scanf("%d",&q);
  if(n%2==0)
     printf("%d",n/2);
  else
    {
      if(i==q)
      printf("Total Head:%d\n",n/2);
      else
      printf("Total Tail:%d\n",n/2+1);
    }
}
}
return 0;
}


