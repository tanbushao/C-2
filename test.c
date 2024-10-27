#include <stdio.h>

/*
author：tanxiaolin
date：2024.10.27
fuDescribtion：
    printfDemo
                    */
int main()
{
    int a = 3;    //c c++ java  一个分号代表一个语句的结束
    float f = 2.3;
    char c = '#';
    int data = 10;
    int divisor = 3;
    float result;
    result = (float)data/divisor;  //除不尽，需要强制进行转换，加一个(float)把整数给小数，如10，将10强制转换成10.0
    printf("这是一个测试文件\n");
    printf("这是第二个测试文件\n");
    printf("随便你输入什么东西，在cmd终端可以看到\n");
    printf("a=%d\n",a);        //占位符/格式控制符，是以%开头。注释是程序员看到，编译预处理的时候，会被清除
    a = 100;
    printf("修改后：a=%d\n",a);
    printf("16进制输出a=0x%x\n",a);
    printf("有一个小数f=%f\n",f);  //小数默认精度输出是6位小数
    printf("有一个字符c=%c\n",c);
    printf("a的地址是%p\n",&a);
    printf("result=%f\n",result);
    printf("result2=%f\n",(float)data/divisor);
    return 0;
}