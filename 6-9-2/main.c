#include <stdio.h>
#define N 15
int main()
{
    int i,flag=1,sign,loca,number,top,mid,bott,a[N];
    char c;
    printf("input numbers:\n");
    scanf("%d",&a[0]);
    i=1;
    while(i<N)
    {
        scanf("%d",&a[i]);
        if(a[i]>=a[i-1])
            i++;
        else
            printf("input the number again.\n");
    }
    for(i=0; i<N; i++)
        printf("%5d",a[i]);
    printf("\n");
    while(flag)
    {
        printf("input the number to look for:\n");
        scanf("%d",&number);
        sign=0;
        top=0;
        bott=N-1;
        if((number<a[0])||(number>a[N-1]))
            loca=-1;
        while((!sign)&&(top<=bott))
        {
            mid=(top+bott)/2;
            if(number==a[mid])
            {
                loca=mid;
                printf("Has found %d,its position is %d.\n",number,loca+1);
                sign=1;
            }
            else if(number<a[mid])
                bott=mid-1;
            else
                top=mid+1;
        }
        if((!sign)||(loca==-1))
            printf("the number %d cannot be found.\n",number);
        printf("continue or not?(Y/N)");
        getchar();
        scanf("%c",&c);
        if(c=='n'||c=='N')
            flag=0;
    }
    return 0;
}

