#include <stdio.h>
#include<string.h>
int main()
{
    char a[80], b[80];
    void copy(char a[],char b[]);
    printf("input the sentence:\n");
    scanf("%s",a);
    copy(a,b);
    printf("the vowels are:\n%s\n",b);
    return 0;
}

void copy(char a[],char b[])
{
    int i,j;
    for(i=0,j=0; i<strlen(a); i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='O'||a[i]=='o'||a[i]=='u'||a[i]=='U')
        {
            b[j]=a[i];
            j++;
        }

    }
    b[j]='\0';
}
