#include<stdio.h>
#include<string.h>
int main()
{
    void space(char[]);
    char a[10];
    printf("input numbers:\n");
    gets(a);
    space(a);
    printf("the current array:\n");
    printf("%s",a);
    return 0;
}

void space(char a[])
{
    int i;
    for(i=strlen(a);i>0;i--)
    {
        a[2*i]=a[i];
        a[2*i-1]=' ';
    }

}
