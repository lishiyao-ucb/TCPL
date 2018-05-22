#include <stdio.h>
int main()
{
    float average(float array[]);
    float score[10],aver;
    int i;
    printf("input numbers:\n");
    for(i=0;i<10;i++)
        scanf("%f",&score[i]);
    aver=average(score);
    printf("the average score is %5f.\n",aver);
    return 0;
}

float average(float array[])
{
    float aver,sum=0;
    int i;
    for(i=0;i<10;i++)
        sum+=array[i];
        aver=sum/10;
        return aver;
}
