#include <stdio.h>
#include <string.h>
 
int count_jewels(const char *s, const char *j) {
    int count = 0;
    for ( ; *s; ++s)
    if(strchr(j, *s))
    ++count;
    
    return count;
}
 
int main() 
{
    char a[20],b[10];
    printf("Enter Stones:");
    gets(a);
    printf("Enter Jewels:");
    gets(b);
    printf("%d\n", count_jewels(a,b));
    return 0;
}