//���Լ�� ��С������
#include <stdio.h>
int main()
{
    int m,n,max,min,r,t,k;
    printf("input two numbers:\n");
    scanf("%d,%d",&m,&n);
    if(m<n)
    {
        t=m;
        m=n;
        n=t;
    }
    r=m%n;
    k=m*n;
    while(r!=0)
    {
        m=n;
        n=r;
        r=m%n;
    }
    min=n;
    max=k/min;
    printf("max=%d\nmin=%d\n",max,min);
    return 0;
}

//���� 35,49
//��� max=245 min=7
