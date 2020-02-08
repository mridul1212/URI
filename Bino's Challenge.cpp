#include<iostream>
using namespace std;
int main()
{
    int n,ar;
    int a=0,b=0,c=0,d=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar;

        if(ar%2==0)
            a++;

        if(ar%3==0)
            b++;

        if(ar%4==0)
            c++;

        if(ar%5==0)
            d++;
    }
    cout<<a<<" Multiplo(s) de "<<2<<endl;
    cout<<b<<" Multiplo(s) de "<<3<<endl;
    cout<<c<<" Multiplo(s) de "<<4<<endl;
    cout<<d<<" Multiplo(s) de "<<5<<endl;
    return 0;

}
