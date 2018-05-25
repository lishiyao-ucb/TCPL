#include <stdio.h>
int main()
{
    void select(int);
    void output(int);
    int n;
    select(n);
    output(n);
    return 0;
}


void output(int n)
{
    printf("%d is a perfect number.\n",n);
}

void select(int n)
{
    int i,sum=0;
    for(n=1; n<1000; n++)
    {
        for(i=1; i<n; i++)
            if(n%i==0)
                sum+=i;
        if(sum==n)
            output(n);
    }
}

