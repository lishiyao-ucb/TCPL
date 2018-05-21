#include <stdio.h>
int main()
{
    int i,a,n,s=0,t;
    printf("input a&n:");
    scanf("%d,%d",&a,&n);
    t=a;
    for(i=1;i<=n;i++)
    {
        s+=a;
        a=10*a+t;
    }
    printf("sum=%d\n",s);
    return 0;
}
