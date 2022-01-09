#include<iostream>
using namespace std;

int main()
{

    int a1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout<<"Element of 3X3 Matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}