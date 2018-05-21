#include <stdio.h>
int main()
{
    int i;
    float sum=0,n,a=2,b=1;
    for(i=1; i<=20; i++)
    {
        n=a/b;
        sum+=n;
        a=a+b;
        b=a-b;
    }
    printf("sum=%f\n",sum);
    return 0;
}
