#include <stdio.h>
int main()
{
    int max(int x,int y);
    int i,m,n,a[10];
    printf("input numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0,m=a[0],n=0;i<10;i++)
    {
        if(max(a[i],m)>m)
        {
            m=a[i];
            n=i;
        }
    }
    printf("The largest number is %d.\nIts position is %d.\n",m,n+1);
    return 0;
}

int max(int x,int y)
{
    return(x>y?x:y);
}
