#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a-b==0)
        cout<<"S"<<endl;
    else  if(c-b==0)
        cout<<"S"<<endl;
    else  if(a-c==0)
        cout<<"S"<<endl;
    else  if((a+c)-b==0)
        cout<<"S"<<endl;
    else  if((a+b)-c==0)
        cout<<"S"<<endl;
    else  if((a+b)-c==0)
        cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

    return 0;
}
