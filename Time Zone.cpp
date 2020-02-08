#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cin>>a>>b>>c;
    sum=a+b+c;
    if(sum<0) sum=24+sum;
        cout<<sum%24<<endl;

    return 0;
}
