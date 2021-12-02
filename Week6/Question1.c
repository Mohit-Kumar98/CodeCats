#include <stdio.h>
#include <string.h> 
void alphacheck(char *, int []);
void create(char *, int[]);
 
int main()
{
    char str1[20], str2[20],new;
    int i,j,l1,l2,flag,k;
 
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    l1=strlen(str1);
    l2=strlen(str2);

    if (strcmp(str1,str2) == 0)
    {
        printf("Each characters are  Equal:");
    }
    else
    {
        if(l1>l2)
        {
            for (i = 0; i <l1; i++)
            {  flag=0;
              for (j = i+1; j < l1; j++)
              {
                 if(str1[i]==str1[j])
                 {
                     flag++;
                 }
              }
              if(flag==1)
              printf("%c",str1[i]);
              
            }
            for(i=0;i<l1;i++)
            {
                flag=0;
                for(j=0;j<l2;j++)
                {
                    if(str1[i]==str2[j])
                    {
                        flag++;
                    }
                }
                if(flag==0 || flag>1)
                {
                new=str1[i];
                printf("%c",new);
                }
            }
            
        }
        else
        {
            for (i = 0; i <l2; i++)
            {  flag=0;
              for (j = i+1; j < l2; j++)
              {
                 if(str2[i]==str2[j])
                 {
                     flag++;
                 }
              }
              if(flag==1)
              printf("%c",str2[i]);
              
            }
            for(i=0;i<l2;i++)
            {
                flag=0;
                for(j=0;j<l1;j++)
                {
                    if(str2[i]==str1[j])
                    {
                        flag++;
                    }
                }
                if(flag==0 || flag>1)
                {
                new=str2[i];
                printf("%c",new);
                }
            }
            
        }
        
    }
 
    return 0;
}