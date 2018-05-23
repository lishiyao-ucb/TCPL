#include <stdio.h>
int a[3][3];
int main()
{
    void exchange(int a[][3]);
    int i,j;
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

void exchange(int a[][3])
{
    int i,j,t;
    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
    {
        t=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=t;
    }
}
