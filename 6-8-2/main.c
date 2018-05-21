#include <stdio.h>
#define N 4
#define M 5
int main()
{
    int a[N][M],i,j,k,max,maxj,flag;
    printf("input the matrix:\n");
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            scanf("%d",&a[i][j]);
    for(i=0; i<N; i++)
    {
        max=a[i][0];
        maxj=j;
        for(j=0; j<M; j++)
            if(a[i][j]>max)
            {
                max=a[i][j];
                maxj=j;
            }
        flag=1;
        for(k=0; k<N; k++)
            if(a[k][maxj]<max)
            {
                flag=0;
                continue;
            }
        if(flag)
        {
            printf("a[%d][%d]=%d\n",i,maxj,max);
            break;
        }
        if(!flag)
            printf("the points does not exist.\n");
    }
    return 0;
}
