#include<stdio.h>
#include<math.h>
float x1,x2,p,q,disc;
int main()
{
    void bigger_than_zero(float,float);
    void equal_to_zero(float,float);
    void smaller_than_zero(float,float);
    float a,b,c;
    printf("input a,b,c:\n");
    scanf("%f,%f,%f",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>0)
    {
        bigger_than_zero(a,b);
        printf("x1=%4.2f\nx2=%4.2f\n",x1,x2);
    }
    else if(disc==0)
    {
        equal_to_zero(a,b);
        printf("x1=%4.2f\nx2=%4.2f\n",x1,x2);
    }
    else if(disc<0)
    {
        smaller_than_zero(a,b);
        printf("x1=%4.2f+%4.2fi\nx2=%4.2f-%4.2fi\n",p,q,p,q);
    }
    return 0;
}

void bigger_than_zero(float x,float y)
{
    x1=(-y+sqrt(disc))/(2*x);
    x2=(-y-sqrt(disc))/(2*x);
}

void equal_to_zero(float x,float y)
{
    x1=(-y)/(2*x);
    x2=(-y)/(2*x);
}

void smaller_than_zero(float x,float y)
{
    p=-y/(2*x);
    q=sqrt(-disc)/(2*x);
}


