#include<stdio.h>
#include<string.h>

int main()
{
    int x1=0,x2=0,l1;
    char cmd[20];
    char new[10]={0};
    printf("Enter Command:");
    gets(cmd);
    l1=strlen(cmd);
    while(x1<l1)
    {
     if(cmd[x1]=='G')
     {
            new[x2]+='G';
            x2+=1;
            x1+=1;
        }
    if(cmd[x1]=='(')
    {
        if(cmd[x1+1]==')')
        {
            new[x2]+='o';
            x2+=1;
            x1+=2;
        }
    }
    if(cmd[x1+1] == 'a' )
	{
        new[x2]+= 'a';
        x2+=1;
        new[x2]+= 'l';
        x2+=1;
        x1+=4;
    }
    
	}
    printf("%s",new);
    return 0;
}