#include<stdio.h>
int main()
{
    extern void space(char[]);
    char a[10];
    printf("input numbers:\n");
    gets(a);
    space(a);
    printf("the current array:\n");
    printf("%s",a);
    return 0;
}
