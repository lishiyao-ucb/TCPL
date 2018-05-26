#include <stdio.h>
int main()
{
    int a,b,c,t;
    int *p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    printf("input a,b,c:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)
    {
        t=*p1;
        *p1=*p2;
        *p2=t;
    }
    else if(b>c)
    {
        t=*p2;
        *p2=*p3;
        *p3=t;
    }
    else if(a>c)
    {
        t=*p1;
        *p1=*p3;
        *p3=*p1;
    }
    printf("the current numbers are %d,%d,%d.\n",*p1,*p2,*p3);
    return 0;
}
