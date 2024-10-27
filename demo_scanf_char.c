#include <stdio.h>
int main()
{
    char data;
    char data2;
    char data3;
    int dataInt;
    float dataFloat;
    /*
    printf("请输入3个字符\n");
    scanf("%c%c%c",&data,&data2,&data3);    //scanf特别要注意%d之间加逗号或者空格，能不加就不加
    printf("你输入的数据是：data=%c,data2=%c,data3=%c\n",  \
    data,data2,data3);  //在开发中如果代码过长可以用\来连接
    */

    printf("请以此输入整数，字符和小数\n");
    scanf("%d%c%f",&dataInt,&data,&dataFloat);
    printf("你输入的数据是：dataIint=%d,data=%c,dataFloat=%f\n",dataInt,data,dataFloat);

    return 0;
}