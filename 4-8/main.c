#include <stdio.h>
int main()
{
    int number,a,b,c;
    printf("the required numbers are:\n");
    for(number=100; number<=999; number++)
    {
        a=number/100;
        b=(number-100*a)/10;
        c=number-100*a-10*b;
        if(a*a*a+b*b*b+c*c*c==number)
            printf("%d  ",number);
    }
    return 0;
}
