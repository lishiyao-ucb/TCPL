#include <stdio.h>
int main()
{
    int k,s1=0,s2=0,s3=0,s=0;
    for(k=1;k<=100;k++)
        s1+=k;
        for(k=1;k<=50;k++)
            s2+=k*k;
        for(k=1;k<=10;k++)
            s3+=1/k;
        s=s1+s2+s3;
        printf("sum=%d\n",s);
        return 0;
}
