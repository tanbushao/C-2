#include <stdio.h>
int main()
{
    char ch;
    puts("������һ����д��ĸ");
    ch = getchar();
    // ����Ƿ�Ϊ��д��ĸ
    if (ch >= 'A' && ch <= 'Z') {
        putchar(ch + 32);  // ת��ΪСд�����
    } 
    else {
        puts("����Ĳ��Ǵ�д��ĸ��");
    }
    return 0;
}
