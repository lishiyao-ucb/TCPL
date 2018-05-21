#include <stdio.h>
int main()
{
    int s=0,n,a,i;
    printf("input n&a:");
    scanf("%d,%d",&n,&a);
    for(i=1;i<=n;i++)
    {
        s+=a;
        a=(i+1)*a;
    }
    printf("the sum is %d.\n",s);
    return 0;
}
