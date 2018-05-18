#include <stdio.h>
int main()
{
    float p=1,r=0.09;
    int n=10,i=1;
    while(i<=n)
    {
        p*=(1+r);
        i++;
    };
    printf("%f\n",p);
    return 0;
}
