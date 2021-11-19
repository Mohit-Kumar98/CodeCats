//General pointer
#include<stdio.h>
int main()
{
    int x=10,y=20;
    float z=10.0;
    void *p=&x;
    p=&z;
    return 0;
}