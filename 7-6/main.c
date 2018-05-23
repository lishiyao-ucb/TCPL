#include <stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80];
    void connect(char a[],char b[]);
    printf("input the first sentence:\n");
    scanf("%s",a);
    printf("input the second sentence:\n");
    scanf("%s",b);
    connect(a,b);
    printf("the combined sentence is\n%s\n",a);
    return 0;
}

void connect(char a[],char b[])
{
    int i=0,j;
    while(a[i]!='\0')
    i++;
    for(j=0;j<strlen(b);j++)
        a[i+j]=b[j];
}
