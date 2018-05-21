#include<stdio.h>
int main()
{
    int i,j,k,p=1,n,a[15][15];
    while(p==1)
    {
        printf("enter p:1~~15\n");
        scanf("%d",&n);
        if((n>0)&&(n<15)&&(n%2!=0))
            p=0;
    }
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    j=n/2+1;
    a[1][j]=1;
    for(k=2; k<n*n; k++)
    {
        i=i-1;
        j=j+1;
        if((i<1)&&(j>n))
        {
            i=i+2;
            j=j-1;
        }
        else
        {
            if(i<1)
                i=n;
            if(j>n)
                j=1;
        }
        if(a[i][j]==0)
            a[i][j]=k;
        else
        {
            i=i+2;
            j=j-1;
            a[i][j]=k;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    return 0;
}
