#include <stdio.h>
int main()
{
    void hanoi(int n, char one, char two, char three);
    int m;
    printf("input the number of disks:\n");
    scanf("%d",&m);
    printf("the steps to move %d disks:\n",m);
    hanoi(m,'A','B','C');
    return 0;
}

void hanoi(int n,char one,char two,char three)
{
    void move(char x,char y);
    if(n==1)
        move(one,three);
    else
    {
        hanoi(n-1,one,three,two);
        move(one,three);
        hanoi(n-1,two,one,three);
    }
}

void move(char x,char y)
{
    printf("%c-->%c\n",x,y);
}
