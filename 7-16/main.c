#include <stdio.h>
#include<string.h>
int main()
{
    int exchange(char a[]);
    char s[20];
    printf("input the number:\n");
    gets(s);
    printf("the current number is %d.\n",exchange(s));
    return 0;
}

int exchange(char a[])
{
    int i,t,sum=0;
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]>='0'&&a[i]<='9')
            t=a[i]-'0';
        else if(a[i]>='A'&&a[i]<='E')
            t=a[i]-'A'+10;
            sum=sum*16+t;
    }
    return sum;
}
