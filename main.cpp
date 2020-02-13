#include <iostream>

using namespace std;

int main()
{
    double a, n=0.0;
    cin>>a;
    while(a--)
    {
        n+=6.0;
        n=1.0/n;
    }
    n+=3.0;
    printf("%.10lf\n",n);
    return 0;
}
