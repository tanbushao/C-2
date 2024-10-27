#include <stdio.h>
int main()
{
    int data;
    int data2;
    int data3;
    printf("请输入一个整数：\n");
    scanf("%d",&data);   //取地址&符号，是指针部分的内容
    printf("输入完毕\n");
    printf("你输入的数据是：%d\n",data);
    
    /*
    printf("请输入3个数\n");
    scanf("%d%d%d",&data,&data2,&data3);
    printf("你输入的数据是：data=%d,data2=%d,data3=%d\n",data,data2,data3);
    */
   
    printf("请输入3个数\n");
    scanf("%d,%d,%d",&data,&data2,&data3);    //scanf特别要注意%d之间加逗号或者空格，能不加就不加
    printf("你输入的数据是：data=%d,data2=%d,data3=%d\n",data,data2,data3);
    return 0;
}