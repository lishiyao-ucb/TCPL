#include <stdio.h>
int main()
{
    int year,month,day;
    int judge(int,int,int);
    printf("input year, month, and date:\n");
    scanf("%d,%d,%d",&year,&month,&day);
    printf("It is the %dth of the year.\n",judge(year,month,day));
    return 0;
}

int judge(int y,int m,int d)
{
    int i,sum=0;
    int a[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
    if((y%400==0)||((y%4==0)&&(y%100!=0)))
    {
        for(i=0; i<m-1; i++)
            sum+=b[i];
        sum=sum+d;
    }
    else
    {
        for(i=0; i<m-1; i++)
            sum+=a[i];
        sum+=d;
    }
    return sum;
}
