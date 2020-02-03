#include<iostream>
using namespace std;
int main()
{
    int a,ar[5],c=0;
    cin>>a;
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<5;i++)
    {
        if(ar[i]==a)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
