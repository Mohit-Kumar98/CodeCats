//  Write a C++ program to find the largest element of a given array of integers

#include<iostream>
using namespace std;

int main()
{
    int a1[3][3];
    int Max,Min;

    cout<<"Enter The Value for 3X3 Matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a1[i][j];
        }
    }
    Max=a1[0][0];
    Min=a1[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(Max<=a1[i][j])
            Max=a1[i][j];
            if(Min>=a1[i][j])
            Min=a1[i][j];
        }
    }
    cout<<"largest element of a given array Matrix:"<<Max<<endl;
    cout<<"Smallest element of a given array Matrix:"<<Min;
    return 0;
}