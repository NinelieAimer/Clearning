# cHello

> ​	C 语言是编译性语言，我们创建的程序是源程序，保存的文件就是源文件，通俗点说就是.c那个文件就是源文件，这些文件要通过编译转化成计算机能够看懂的机器语言才能够执行

![v2-e77fe3b088bddc6eb628c88a04680d35_r](D:\Learning\Clearning\notes\TyporaImage\v2-e77fe3b088bddc6eb628c88a04680d35_r-1613872454242.jpg)

- 注释方法就是**/* ......*/**具体就不多说了

- C语言一定要注意，句子的末尾要加**分号**，这是C语言和Python不一样的地方

#### Printf函数和格式化输出

```C
#include<stdio.h>
int main(void){
    printf("hello world %d",32);
    return 0;
}

=====
hello world 32
```

非常简单的函数其他就不多说，第一行相当于import ,面相当于函数一样，但是会直接被调用

```c
#include <stdio.h>
int main(void){
    printf("Hello world \ntest");
    return 0;
}

====
hello world
test
```

```c
#include <stdio.h>
int new_main(void){
    printf("Hello world");
    printf("test");
    return 0;
}
```

这两个输出是一样的哦，因为这个空格不能多打

**注意这里字符串一定要用双引号，单引号不行的**

### 变量

#### 变量和声明

> **首先，C语言中所有的变量都要==声明才可以用==**，这是C与Python不同地方，然后声明后才能进行赋值

```c
// 声明变量是必须会的东西，也是要注意的地方
# include <stdio.h>
int main(void){
    int vx=1;
    int vy=vx+1;
    
    printf("vx的值是 %d \n",vx);
    printf("vy的值是 %d",vy);
    return 0;
}
```

### 输入和显示

#### scanf函数

> ​	这个就类似于python的input函数，但是有挺多不同的地方

- 这里scanf类似于读取我们键入的东西，然后在这个scanf中就要把这个键入传到某个变量中
- scanf无法返回输入的值，一定要用&传入某个变量中
- 还有就是scanf里不能像python一样输入字符串，只能是数字，printf才可以用来输入字符

```c
// 作为输入函数，这个有挺多不一样的地方
#include <stdio.h>
int main(void){
    int easy;
    printf("Please enter a number:");
    scanf("%d",&easy);
    printf("%d",easy);
    return 0;
}
```

#### puts函数

> ​	这个函数和printf差不多，但是有不同，他的意义就是在末尾自动换行，**但是这个函数不能格式化数据的，其实意义不太大**