#include <stdio.h>
int main()
{
    char a = 'a';
    char b = 'b';
    
    char A = 'A';
    char B = 'B';

    printf("%c,%c,%c,%c\n",a,b,A,B);
    printf("a=%d,b=%d,A=%d,B=%d\n",a,b,A,B);

    puts("请输入一个大写字");
    scanf("%c",&a);
    b=a+32;
    printf("你输入的字母对应的小写字母是%c\n",a+32);
    printf("你输入的字母对应的小写字母是%c\n",b);

    printf("测试");
    getchar();    //�������ջس�������Դ15�С�����ֶ������scanf����ַ���ʱ��Ҫע��س���
    putchar(getchar()+32);
    return 0;
}
