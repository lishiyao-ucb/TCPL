#include <stdio.h>
int main()
{
    char a[5][9];
    int i,j;
    for(i=0; i<5; i++)
        for(j=0; j<9; j++)
            a[i][j]=' ';
    for(i=0; i<5; i++)
        for(j=i; j<=i+4; j++)
            a[i][j]='*';
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
            printf("%c",a[i][j]);
            printf("\n");
    }
    return 0;
}
