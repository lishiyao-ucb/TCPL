#include <stdio.h>
int main()
{
    float px(int,int);
    int n,x;
    printf("input n&x:\n");
    scanf("%d,%d",&n,&x);
    printf("the result is %f.\n",px(n,x));
    return 0;
}

float px(int n,int x)
{
    if(n==0)
        return(1);
    else if(n==1)
        return(x);
    else
        return ((2*n-1)*x-px(n-1,x)-(n-1)*px(n-2,x))/n;
}
