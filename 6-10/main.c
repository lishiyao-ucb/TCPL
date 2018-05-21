#include<stdio.h>
#include<string.h>
int main()
{
    char a[3][80];
    int i,j,upper=0,lower=0,numbers=0,spaces=0;
    for(i=0; i<3; i++)
    {
        printf("input the sentence:\n");
        gets(a[i]);
        for(j=0; j<80&&a[i][j]!='\0'; j++)
        {
            if(a[i][j]>='A'&&a[i][j]<='Z')
                upper++;
            else if(a[i][j]>='a'&&a[i][j]<='z')
                lower++;
            else if(a[i][j]>='0'&&a[i][j]<='9')
                numbers++;
            else if(a[i][j]==' ')
                spaces++;
        }
        printf("upper=%d\nlower=%d\nnumbers=%d\nspaces=%d\n",upper,lower,numbers,spaces);
    }
    return 0;
}
