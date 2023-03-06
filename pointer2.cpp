#include<iostream>
using namespace std;
int main()
{
    int a=1025;
    int *p;
    p==&a;
    cout << (*p)<<endl;
    char *p1;
    p1=(char*)p;
    cout<<(*p1);
    return 0;

}