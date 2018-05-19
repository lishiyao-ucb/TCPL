#include <stdio.h>
#include<math.h>
#define N 100
int main()
{
    int a[N],i,j;
    for(i=0; i<N; i++)
        a[i]=i+1;
    for(i=2; i<N; i++){
        for(j=2; j<=sqrt(a[i]); j++)
        {
            if(a[i]%j==0)
                a[i]=0;
        }
    }
    printf("the primers are:\n");
    for(i=1; i<N; i++)
    {
        if(a[i]!=0)
            printf("%d ",a[i]);
    }

    return 0;
}
