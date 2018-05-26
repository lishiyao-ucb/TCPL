#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20];
    char exchange(char *,char *);
    printf("input three sentences:\n");
    gets(a);
    gets(b);
    gets(c);
    if(strcmp(a,b)>0) exchange(a,b);
    else if(strcmp(a,c)>0) exchange(a,c);
    else if(strcmp(b,c)>0) exchange(b,c);
    printf("the current sentences are:\n");
    printf("%s\n%s\n%s\n",a,b,c);
    return 0;
}

char exchange(char *p1,char *p2)
{
    char p[20];
    {
        strcpy(p,p1);
        strcpy(p1,p2);
        strcpy(p2,p);
    }
}
