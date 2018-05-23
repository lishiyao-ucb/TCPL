#include <stdio.h>
#include<string.h>
int letter=0,number=0,space=0,others=0;
int main()
{
    char s[20];
    void count(char[]);
    printf("input the sentence:\n");
    gets(s);
    count(s);
    printf("letter=%d\nnumber=%d\nspace=%d\nothers=%d\n",letter,number,space,others);
    return 0;
}

void count(char s[20])
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            letter++;
        else if(s[i]>='0'&&s[i]<='9')
            number++;
        else if(s[i]==' ')
            space++;
        else others++;
    }
}
