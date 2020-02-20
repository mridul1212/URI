#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    float a;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        cin>>a;
        float ar[7],sum=0;
        for(int i=0;i<7;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        sort(ar,ar+7);
        sum=sum-ar[0];
        sum=sum-ar[6];
        sum=sum*a;
        cout<<str<<" ";
        printf("%.2f\n",sum);
    }
    return 0;
}
