#include <stdio.h>
int main()
{
    void search(float (*p)[4],int n);
    float score[3][4]= {{34,67,70,60},{80,87,90,81},{90,99,100,98}};
    search(score,3);
    return 0;
}

void search(float (*p)[4],int n)
{
    int i,j,flag;
    for(i=0; i<n; i++)
    {
        flag=0;
        for(j=0; j<4; j++)
            if(*(*(p+i)+j)<60)
                flag=1;
        if(flag==1)
        {
            printf("No.%d fails, his scores are:\n",i+1);
            for(j=0; j<4; j++)
                printf("%5.1f ",*(*(p+i)+j));
                printf("\n");
        }
    }
}
