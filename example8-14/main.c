#include<stdio.h>
int main()
{
    void aver(float *p, int n);
    void search(float (*p)[4],int n);
    float a[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    aver(*a,12);
    search(a,2);
    return 0;
}

void aver(float *p, int n)
{
    float sum=0,aver=0;
    float *p_end;
    p_end=p+n-1;
    for(;p<=p_end;p++)
        sum+=*p;
    aver=sum/n;
    printf("the average is %4f.\n",aver);
}

void search(float (*p)[4],int n)
{
    int i;
    printf("the scores of NO.%d student are:\n",n);
    for(i=0;i<4;i++)
        printf("%f ",*(*(p+n)+i));
}
