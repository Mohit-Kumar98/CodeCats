#include<iostream>
using namespace std;

int main()
{

    int a1[3][3];

    cout<<"Enter The Value for 3X3 Matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a1[i][j];
        }
    }
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