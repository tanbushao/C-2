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
    puts("������һ����д��ĸ");
    scanf("%c", &a);
    getchar(); // ���������

    b = a + 32;
    printf("���������ĸ��Ӧ��Сд��ĸ�� %c\n", b);
    printf("����");
    //���ַ�ת��ΪСд�����
    scanf("%c", &a);
    putchar(a+32);
    return 0;
}