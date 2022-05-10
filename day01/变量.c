#include <stdio.h>
// int main(){
//     printf("hello world\n");
//     int age = 12;
//     double weight = 71.42;
//     float price  = 2.6;
//     age = age+1;
//     weight = weight - 15;
//     price = price +1;
//     printf("%d\n",age);// %d 打印整数
//     printf("%f\n",price);// %d 打印单浮点数 float
//     printf("%lf",weight); // %lf 打印双浮点数 double
//     return 0;
// }


// int age = 20; // 全局变量 main主函数大括号 ｛｝外定义
// int main(){
//     // 局部变量 main主函数大括号｛｝内定义
//     int age = 12;
//     printf("%d",age);
//     return 0;
// }
// 当局部变量和全局变量名字定义相同时，局部变量 优先
// 不建议讲局部变量和全局变量名字定义相同。



int main(){
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("sum = %d\n",sum);
    return 0;
}