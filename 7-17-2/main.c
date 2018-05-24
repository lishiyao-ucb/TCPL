#include<stdio.h>
int main()
{
    void convert(int n);
    int number;
    printf("input an integer:\n");
    scanf("%d",&number);
    if(number<0)
    {
        putchar('-');
        number=-number;
    }
    convert(number);
    return 0;
}

void convert(int n)
{
    int i;
    if((i=n/10)!=0)
    convert(i);
    putchar(n%10+'0');
    putchar(32);
}
