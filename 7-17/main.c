#include <stdio.h>
int main()
{
    long n;
    void change(long);
    printf("input a number:\n");
    scanf("%ld",&n);
    change(n);
    return 0;
}

void change(long x)
{
    long i=0,j=0,a=x;
   char b[20];
    while(x!=0)
    {
        x=x/10;
        i++;
    }
    while(i!=0)
    {
        b[j]=a%10+48;
        a=a/10;
        i--;
        j++;
    }
    for(;j>=0;j--)
    printf("%c",b[j-1]);
}
