#include <stdio.h>
int main()
{
    char a = 'a';
    char b = 'b';
    
    char A = 'A';
    char B = 'B';

    printf("%c,%c,%c,%c\n",a,b,A,B);
    printf("a=%d,b=%d,A=%d,B=%d\n",a,b,A,B);

    puts("������һ����д��");
    scanf("%c",&a);
    b=a+32;
    printf("���������ĸ��Ӧ��Сд��ĸ��%c\n",a+32);
    printf("���������ĸ��Ӧ��Сд��ĸ��%c\n",b);

    printf("����");
    getchar();    //���ջس�������Դ��14�С�����ֶ������scanf����ַ���ʱ��Ҫע��س���    putchar(getchar()+32);
    return 0;
}
