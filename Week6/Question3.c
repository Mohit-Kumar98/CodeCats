#include<stdio.h>
#include<string.h>

void longestSubseqWithK(char *str, int k)
{
	int x=strlen(str);
	int freq[20] = {0};				
	for (int i = 0 ; i < x; i++)
		freq[str[i] - 'a']++;			
	
	for (int i = 0 ; i < x ; i++)
		if (freq[str[i] - 'a'] >= k)			
			printf("%c",str[i]);	
}
int main() 
{
	char str[20];
	int freq;
    printf("Enter Sting:");
    gets(str);
    printf("Enter The Frequence:");
    scanf("%d",&freq);
	longestSubseqWithK(str,freq);	
	return 0;
}
