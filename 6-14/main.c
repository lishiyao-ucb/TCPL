#include <stdio.h>
#include<string.h>
int main()
{
    char s1[80],s2[80];
    int i=0,result;
    printf("input the first sentence:\n");
    gets(s1);
    printf("input the second sentence:\n");
    gets(s2);
    while((s1[i]==s2[i])&&(s1[i]!='\0')) //µÈÓÚºÅ°¡°¡°¡°¡°¡£¡£¡£¡£¡
        i++;
    if(s1[i]==s2[i])
        result=0;
    else
        result=s1[i]-s2[i];
    printf("the result is %d\n",result);
    return 0;
}
