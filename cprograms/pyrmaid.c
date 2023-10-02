#include<Stdio.h>
#include"string.h"
int main()
{
    char s1[10]={"vishnu"};
    char s2[10]={"naruto"};
    char i;
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}   