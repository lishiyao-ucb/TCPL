#include <stdio.h>
int main()
{
    int i;
    float l=100,h=l/2;
    for(i=2;i<=10;i++)
    {
        l+=2*h/2;
        h=h/2;
    }
    printf("the length=%f\nthe hight=%f\n",l,h);
    return 0;
}
