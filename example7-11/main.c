#include <stdio.h>
int main()
{
    float average(float array[],int n);
    float score1[5]={98.5,97,91.5,60,55};
    float score2[10]={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
    printf("The average score of class A is %6.2f.\n",average(score1,5));
    printf("The average score of class B is %6.2f.\n",average(score2,10));
    return 0;
}

float average(float array[],int n)
{
    int i;
    float sum=0,average;
    for(i=0;i<n;i++)
        sum+=array[i];
    average=sum/n;
    return average;
}
