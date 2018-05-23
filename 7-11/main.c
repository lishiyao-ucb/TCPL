#include <stdio.h>
#define N 10
int main()
{
    void exchange(int []);
    int a[N],i;
    printf("input 10 numbers:\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    exchange(a);
    for(i=0;i<N;i++)
        printf("%3d",a[i]);
    return 0;
}

void exchange(int string[])
{
    int i,j,t;
    for(i=0;i<N-1;i++)
        for(j=0;j<N-i-1;j++)
        if(string[j]>string[j+1])
    {
        t=string[j];
        string[j]=string[j+1];
        string[j+1]=t;
    }
}
