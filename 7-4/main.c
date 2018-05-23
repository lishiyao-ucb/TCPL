#include <stdio.h>
int main()
{
    void exchange(int b[][3]);
    int a[3][3],i,j;
    printf("input the matrix:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    exchange(a);
    printf("the current matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    printf("\n");
    return 0;
}

void exchange(int b[][3])
{
    int i,j,t;
    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
    {
        t=b[i][j];
        b[i][j]=b[j][i];
        b[j][i]=t;
    }
}
