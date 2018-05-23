#include <stdio.h>
#include<string.h>
int main()
{
    int alphebetic(char);
    int longest(char []);
    char line[100];
    int i;
    printf("input a sentence:\n");
    gets(line);
    printf("the longest word is:\n");
    for(i=longest(line); alphebetic(line[i]); i++)
        printf("%c",line[i]);
    printf("\n");
    return 0;
}

int alphebetic(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return(1);
    else
        return(0);
}

int longest(char string[])
{
    int len=0,length=0,i,flag=1,point=0,place=0;
    for(i=0; i<=strlen(string); i++)
        if(alphebetic(string[i]))
            if(flag)
            {
                point=i;
                flag=0;//×¢ÒâÁË£¡£¡£¡
            }
            else len++;
            else
            {
                flag=1;
                if(len>=length)
                {
                    length=len;
                    len=0;
                    place=point;
                }
            }
            return(place);
}
