#include <stdio.h>

int main()
{
    char a = 'a';
    char b = 'b';
    char A = 'A';
    char B = 'B';

    printf("%c, %c, %c, %c\n", a, b, A, B);
    printf("a=%d, b=%d, A=%d, B=%d\n", a, b, A, B);
    char c;
    puts("请输入一个大写字母");
    scanf("%c", &a);
    getchar(); // 清除缓冲区

    b = a + 32;
    printf("你输入的字母对应的小写字母是 %c\n", b);
    printf("测试");
    //将字符转换为小写并输出
    scanf("%c", &a);
    putchar(a+32);
    return 0;
}