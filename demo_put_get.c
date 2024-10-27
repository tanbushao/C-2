#include <stdio.h>
int main()
{
/*
    跟printf的区别
    1.puts会自动加入换行,而printf要加入\n进行换行
    2.printf支持多种花样输出，而puts就是输出字符串
*/
    char c;
    puts("请输入一个字符");
    c = getchar();
    puts("你输入的字符是");
    putchar(c);
    return 0;
}