#include<iostream>
using namespace std;
int main()
{
    int name[6];
    for(int i=0;i<6;i++)
    {
        cin>>name[i];
    }
    for(int i=6;i>0;i--)
    {
        cout<<name[i];
    }
    return 0;
}