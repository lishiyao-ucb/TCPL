#include <stdio.h>
int main()
{
    int a[11]= {1,4,9,16,25,36,49,64,81,100},i,j,num;
    printf("input a number:\n");
    scanf("%d",&num);
    if(num>=a[9])
        a[10]=num;
    else if(num<a[9])
    {
        for(i=0; i<=9; i++)
        {
            if(num<a[i])
            {
                for(j=10; j>i; j--)
                    a[j]=a[j-1];
                    a[i]=num;
                break;
            }
        }
    }
    printf("the current array is:\n");
    for(i=0; i<11; i++)
        printf("%d ",a[i]);
    return 0;
}
