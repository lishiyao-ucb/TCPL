#include <stdio.h>
int main()
{
    int gcd(int,int);
    int lcm(int,int);
    int m,n;
    printf("input two numbers:\n");
    scanf("%d,%d",&m,&n);
    printf("the GCD is %d.\nthe LCM is %d.\n",gcd(m,n),lcm(m,n));
    return 0;
}

int gcd(int x,int y)
{
    int r,gcd;
    while(r!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    gcd=x;
    return gcd;
}

int lcm(int x,int y)
{
    int lcm;
    lcm=x*y/gcd(x,y);
    return lcm;
}
