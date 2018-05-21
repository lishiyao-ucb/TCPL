#include <stdio.h>
int main()
{
    int i,sum=1;
    for(i=1; i<10; i++)
    {
        sum*=2;
        sum+=1;
    }sum-=1;
    printf("sum=%d\n",sum);
    return 0;
}
