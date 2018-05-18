#include <stdio.h>
int main()
{
    char a;
    int words=0,space=0,numbers=0,others=0;
    printf("input a sentence:\n");
    while((a=getchar())!='\n')
    {
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
            words++;
        else if(a==' ')
            space++;
        else if(a>=0||a<=9)
            numbers++;
        else others++;
    }
    printf("words=%d\nspace=%d\nnumbers=%d\nothers=%d\n",words,space,numbers,others);
    return 0;
}
