#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double a,b,c,d;
    cin>>a;
    b= (1+sqrt(5))/2.0;
    c = (1-sqrt(5))/2.0;
    d= (pow(b,a))-(pow(c,a))/sqrt(5);
    printf("%.1lf\n",d);
    return 0;
}
