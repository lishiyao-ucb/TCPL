#include <stdio.h>
#include<math.h>
int main()
{
    float x1,x2;
    int a;
    printf("input number a:\n");
    scanf("%d",&a);
    x1=a/2;
    x2=(x1+a/x1)/2;
    do
    {
        x1=x2;
         x2=(x1+a/x1)/2;
    }
    while(fabs(x1-x2)>=1e-5);
    printf("the result is %5f",x1);
    return 0;
}
