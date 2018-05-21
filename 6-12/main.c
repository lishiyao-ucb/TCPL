#include <stdio.h>
#include<string.h>
int main()
{
    char c1[80],c2[80];
    int i,j=0;  //³õÊ¼»¯£¡£¡£¡
    printf("input the original sentence:\n");
    gets(c1);
    for(i=0; c1[i]!='\0'; i++)
    {
        if(c1[i]>='A'&&c1[i]<='Z')
            c2[i]=155-c1[i];
        else if(c1[i]>='a'&&c1[i]<='z')
            c2[i]=219-c1[i];
        else
            c2[i]=c1[i];
            j++;
    }
    for(i=0;i<j;i++)
        putchar(c2[i]);
    printf("\n");
    return 0;
}
