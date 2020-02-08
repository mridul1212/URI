#include<stdio.h>
int main()
{
    double a,h,b,d;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
         b = b/2;
         d= (3.14*b*b);
         h= a/d;
         printf("ALTURA = %.2lf\n",h);
         printf("AREA = %.2lf\n",d);
    }
    return 0;
}
