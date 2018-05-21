#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[40];
    int i=0,j=0;
    printf("input the first sentence:\n");
    scanf("%s",a);
    printf("input the second sentence:\n");
    scanf("%s",b);
    while(a[i]!='\0')
        i++;
    while(b[j]!='\0')
        a[i++]=b[j++];
    a[i]='\0';
    puts(a);
    return 0;
}
