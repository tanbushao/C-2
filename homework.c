#include <stdio.h>
int main()
{
    char c1 = 'C';
    char c2 = 'h';
    char c3 = 'i';
    char c4 = 'n';
    char c5 = 'a';
    //使用printf函数输出
    printf("%c%c%c%c%c\n",c1+4,c2+4,c3+4,c4+4,c5+4);
    
    //用putchar函数输出
    c1=c1+4;
    c2=c2+4;
    c3=c3+4;
    c4=c4+4;
    c5=c5+4;
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    return 0;
}