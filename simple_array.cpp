#include<iostream>
using namespace std;

int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    char B[]={'A','B','C','D','E','F','G'};
    float C[5]={};
    //IF WE ARE NOT GIVING VALUE IT TAKE ZERO AS DEFAULT
    for(int i=0;i<10;i++)    
    {
        cout<<A[i]<<endl;
    }   
    for(auto x:B)
    {
        cout<<x<<endl;
    }  
    for(float x:C)
    {
        cout<<x<<endl;
    }      
    return 0;
}