/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40%   : Grade F
*/

#include<stdio.h>
int main()
{

    int p,ch,b,m,c,total;
    float per;
    printf("Enter the marks of Physics:");
    scanf("%d",&p);
    printf("Enter the marks of Chemistry:");
    scanf("%d",&ch);
    printf("Enter the marks of Biology:");
    scanf("%d",&b);
    printf("Enter the marks of Mathematics:");
    scanf("%d",&m);
    printf("Enter the marks of Computer:");
    scanf("%d",&c);
    total=p+ch+b+m+c;
    per=total/5.0;
    printf("Percantage:%f\n",per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }

    
        return 0;
}


