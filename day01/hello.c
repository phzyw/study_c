#include<stdio.h>
	int main(){
	printf("helloworld\n");// \n代表换行
	printf("111\n");
	printf("%d\n",100);// 打印一个整数  -%d
	// sizeof 关键字  -操作符：计算类型或者变量所占空间的大小,单位为字节（byte）
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\nd",sizeof(float));
	printf("%d\n",sizeof(double));
    return 0;
	}
	// mian 函数是程序的入口，一个工程中main函数有且只有一个。
