#include <stdio.h>
#include<math.h>
int main()
{
    int prime(int);
    int a;
    printf("input a number:\n");
    scanf("%d",&a);
    if(prime(a))
        printf("%d is a prime.\n",a);
    else
        printf("%d is not a prime.\n",a);
    return 0;
}

int prime(int a)
{
    int i,flag=1;
    for(i=2;i<a/2&&flag==1;i++)
        if(a%i==0)
        flag=0;
    return flag;
}
