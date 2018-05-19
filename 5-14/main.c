#include <stdio.h>
#include<math.h>
int main()
{
    float x1,x2;
    x2=1.5;
    while(fabs(x1-x2)>=1e-5)
    {
        x1=x2;
        x2=x1-(2*x1*x1*x1-4*x1*x1+3*x1-6)/(6*x1*x1-8*x1+3);
    }
    printf("the result is %5.2f\n",x2);
    return 0;
}
