#include <iostream>

using namespace std;

int main()
{
    int unsigned long a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        else
            cout<<a*b<<endl;
    }
    return 0;
}
