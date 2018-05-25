#include <stdio.h>
int main()
{
    int a[3][4]= {1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4];
    int i,j;
    p=a;
    printf("the matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            printf("%d\t",*(*(p+i)+j));
        printf("\n");
    }
    p=a;
    printf("input the row and the column:\n");
    scanf("%d,%d",&i,&j);
    printf("a[%d][%d]=%d\n",i,j,*(*(p+i-1)+j-1));
    printf("\n");
    return 0;
}
