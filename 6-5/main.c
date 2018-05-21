#include <stdio.h>
#define N 5
int main()
{
    int i,a[N],t;
    printf("input 5 numbers:\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N/2;i++)
    {
        t=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=t;
    }
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    return 0;
}
