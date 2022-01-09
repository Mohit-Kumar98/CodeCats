#include<stdio.h>

char s[10];
gets(s);

int i=0;
while(s[i]!='\0')
{
    printf("%c",s[i]);
    if(s[i]==" ")
    printf("\n");
    i++;
}