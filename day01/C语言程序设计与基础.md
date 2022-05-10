### 第一个C语言程序

```c
#include<stdio.h>
	int main(){
	printf("helloworld");
    return 0;
	}
// mian 函数是程序的入口，一个工程中main函数有且只有一个。
```



### 数据类型

- char	字符数据类型  
- short   短整形
- int       整形
- long    长整形
- long long 更长的整形
- float     单精度浮点数 
- double 双精度浮点数

```c
#include<stdio.h>
	int main(){
	printf("helloworld\n");// \n代表换行
	printf("111\n");
	printf("%d\n",100);// 打印一个整数  -%d
	// sizeof 关键字  -操作符：计算类型或者变量所占空间的大小,单位为字节（byte）
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
    return 0;
	}
```

1. `%d` 代表打印一个整数
2. `sizeof()` 计算类型或者变量所占空间的大小,单位为字节（byte）
3. 计算机中的单位
   - bit 最小单位，比特
   - byte  字节  1byte = 8bit
   - kb  = 1024byte
   - mb  = 1024kb
   - gb   =1024mb
   - tb  =1024gb
   - pb  =1024tb



### 变量，常量

c语言怎么表述？

- 常量：不能改变的量

- 变量：能被改变的量

```c
#include <stdio.h>
int main(){
    printf("hello world\n");
    int age = 12;
    double weight = 71.42;
    age = age+1;
    weight = weight - 15;
    printf("%d\n",age);// %d 打印整数 int
    printf("%f\n",age);// %d 打印单浮点数 float
    printf("%lf",weight); // %lf 打印双浮点数 double
    return 0;
}
```



变量的分类

- 局部变量

- 全局变量

  区别：

  ```c
  #include <stdio.h>
  int age = 20; // 全局变量 main主函数大括号 ｛｝外定义
  int main(){
      // 局部变量 main主函数大括号｛｝内定义
      int age = 12;
      printf("%d",age);
      return 0;
  }
  // 当局部变量和全局变量名字定义相同时，局部变量 优先
  // 不建议讲局部变量和全局变量名字定义相同。
  ```

  输入函数：`scanf()`