#include <stdio.h>
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *p=a;
    for(;p<a[0]+12;p++)
    {
        if((p-a[0])%4==0) printf("\n");
        printf("%4d",*p);
    }
    return 0;
}
