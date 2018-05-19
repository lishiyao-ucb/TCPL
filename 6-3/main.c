#include <stdio.h>
#define N 3
int main()
{
    int i,j,s=0,s1=0,s2=0;
    int a[N][N];
    printf("input the matrix:\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
    s1+=a[i][i];
    for(i=0;i<N;i++)
        s2+=a[i][N-1-i];
        s=s1+s2-a[1][1];
    printf("the sum is %d.\n",s);
    return 0;
}
