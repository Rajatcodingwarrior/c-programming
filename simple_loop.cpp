#include<iostream>
using namespace std;

int main()
{
    int n,l=0;
    cout<<"enter a no n";
    cin>>n;
    while(n>=0)
    {
        cout<<l<<endl;
        n-=1;
        l+=1;
    }
    return 0;
}