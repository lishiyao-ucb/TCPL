#include <stdio.h>
#include<string.h>
int main()
{
    char string[81];
    int i,num=0,word=0;
    printf("input a sentence:\n");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ') word=0;
        else if(word==0)
        {
            word=1;
            num++;
        }
    }
    printf("There are %d words in the sentence.\n",num);
    return 0;
}
