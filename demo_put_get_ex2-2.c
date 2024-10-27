#include <stdio.h>
int main()
{
    char ch;
    puts("请输入一个大写字母");
    ch = getchar();
    // 检查是否为大写字母
    if (ch >= 'A' && ch <= 'Z') {
        putchar(ch + 32);  // 转换为小写并输出
    } 
    else {
        puts("输入的不是大写字母！");
    }
    return 0;
}
