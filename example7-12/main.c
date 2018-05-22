#include <stdio.h>
int main()
{
    void sort(int array[],int n);
    int i,a[10];
    printf("input numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    sort(a,10);
    printf("the current array:\n");
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
    return 0;
}

void sort(int array[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        if(array[i]>array[j])
        {
            t=array[i];
            array[i]=array[j];
            array[j]=t;
        }
    }
}
