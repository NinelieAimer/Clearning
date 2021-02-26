## 函数

### 函数定义和基础介绍

> ​	函数是啥我就不多说了，模块化编程嘛，C语言是面对过程的，**main函数必不可少**，其他库函数那就多了

#### 函数定义

我们直接上例子吧

```c
#include <stdio.h>

int max2(int a,int b){
    if (a>b)
    {
        return a;
    } else{
        return b;
    };
    
}
int i,j;

int main(void){
    printf("Please enter first number :"); scanf("%d",&i);c
    printf("Please enter second number:"); scanf("%d",&j);

    printf("The higher is %d",max2(i,j));
}
```

这里第一个max2就是一个定义的函数，我来解释一下

- C语言比较麻烦，**一定要定义函数返回类型**，所以int的意思就是返回Int类型的
- 里面的形参，**也要定义类型**才可以使用，所以比较麻烦
- 并且调用函数的时候，不能用python那种a=，没法，会报错

### 函数设计

#### 没有返回值的函数

> ​	在C之中，不能像python一样，随便是否返回值。C如果要没有返回值需要用void定义函数，void就是空的意思，定义没有形参函数也用这个

```c
#include <stdio.h>

void put_stars(int n){
    while(n-->0){
        putchar('*');
    };
};

int main(void){ //这就是创建了没有形参的函数
    int i,len;

    printf("Print an angle\n");
    printf("long:");
    scanf("%d",&len);

    for (i=1;i<=len;i++){
        put_stars(i);
        putchar('\n');
    };
}

===========
Print an angle
long:3
*
**
***
```

#### 作用域

> ​	这个很好理解，赋给变量的标识符，名称都有一个通用范围，就是*作用域*，在程序块中，声明变量**只在大括号内有用**，在外面就没用了，这样的作用域称为*块作用域*

#### 文件作用域

> ​	这个你就理解为全局变量，在开头声明的，没有在大括号声明的，都可以在整个文件中可用

#### 头文件和文件包含指令

> ​	我们平时常用的库函数*printf*和*putchar*就是在*<stdio.h>*里面读取的，这个东西就叫做*头文件*，而取得头文件就是用*#include*这种方式

#### 数组的传递

```c
#include <stdio.h>

#define NUMBER 5

int max_of(int v[],int n){  //这个要注意，声明输入变量是数组的方法，要注意
    int i;
    int max=v[0];
    for (i=1;i<n;i++){
        if(v[i]>max){
            max=v[i];
        };
    };
    return max;
};

int main(void){
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e,max_m;

    printf("Please enter %d students grade \n",NUMBER);
    for (i=0;i<NUMBER;i++){
        printf("[%d] English:",i+1); scanf("%d",&eng[i]);
        printf("math:"); scanf("%d",&mat[i]);

    };
    max_e=max_of(eng,NUMBER);
    max_m=max_of(mat,NUMBER);

    printf("The highest grade of English is %d\n",max_e);
    printf("The highest grade of math is:%d",max_m);

    return 0;
}
```

这上面代码最重要的就是要注意这个函数形参数组定义的方法

```c
int max_of(int v[],int n){
    /*code*/
};
```

这个定义牢记在心就行

#### 函数的传递和const类型的修饰符

> ​	const这个修饰符，是为了防止传入函数的变量被改变，我们举个例子就知道了

```c
#include <stdio.h>

void set_zero(int v[],int n){
    int i;
    for(i=0;i<n;i++){
        v[i]=0; //意思不就是设置每个变量为0
    };
};

void print_array(const int v[],int n){
    int i;
    printf("{");
    for (i=0;i<n;i++){
        printf("%d,",v[i]);
    };
    printf("}");
};

int main(void){
    int ary1[]={1,2,3,4,5};
    int ary2[]={3,2,1};

    printf("array_1="); print_array(ary1,5); putchar('\n');
    printf("array_2="); print_array(ary2,3); putchar('\n');

    set_zero(ary1,5);
    set_zero(ary2,3);

    printf("0 has replaced");
    printf("array_1="); print_array(ary1,5); putchar('\n');
    printf("array_2="); print_array(ary2,3); putchar('\n');
    return 0;
};
```

这个是正确的代码，我们在*print_array*时候不希望数组被改变，用了const来修饰这个东西，如果我在这个函数块中加入改变数组的语句会报错，比如*v[i]=i*这种

### 作用域和储存期

#### 作用域和标识符的可见性

> ​	我们都知道函数中定义变量和文件域定义变量，不一样，那哪个优先的问题，就很麻烦，我们用一段代码表示一下

```c
#include<stdio.h>

int x=75;

void print_x(void){
    printf("x=%d\n",x);
};

int main(void){
    int i;
    int x=999;

    print_x();

    printf("x=%d\n",x);

    for (i=0;i<5;i++){
        int x=i*100;
        printf("x=%d\n",x);
    }
    printf("x=%d\n",x);

    return 0;
}

=====
x=75
x=999
x=0
x=100
x=200
x=300
x=400
x=999
```

这里一般都比较好理解，不好理解应该就是print_x()这个为什么输出的是75，明明在main()里面执行的，这里有个问题，前面也说了，调试时候也明白，C语言不是解释语言，定义**函数默认是要跳出这个main()进行执行的**，这个理解之后，其实就明白了

#### 储存期

> ​	储存期描述变量的寿命这个东西的，我们用一串代码来说一下

- **static**可以用来定义出来的对象，这个对象就被赋予了**静态储存器**，具有如下特征
  - 在程序开始执行的时候，具体说在*main*函数执行之前的准备阶段被创建出来
  - 理论上来说又“永久“的寿命
  - 这种变量如果不进行初始化，则**对象会自动初始化为0，不会是垃圾值**

|        | 自动储存期                         | 静态储存期                    |
| ------ | ---------------------------------- | ----------------------------- |
| 生成   | 执行到那一步才能被建立             | 在开始执行前就被创造出来      |
| 初始化 | 不显式进行初始化，对象就是不确定值 | 不显示初始化，对象是初始化为0 |
| 消失   | 执行到程序块末尾就会消失           | 程序结束时候消失              |

```c
#include <stdio.h>

int fx=0;

void func(void){
    static int sx=0;    //这里不是在里面初始化的，在开始前就初始化了，只是执行了一次
    int ax=0;

    printf("%3d%3d%3d\n",ax++,sx++,fx++);
}

int main(void){
    int i;

    puts(" ax sx fx");
    puts("----------");
    for (i=0;i<10;i++){
        func();
    };

    puts("-----------");

    return 0;
}



ax sx fx
----------
  0  0  0
  0  1  1
  0  2  2
  0  3  3
  0  4  4
  0  5  5
  0  6  6
  0  7  7
  0  8  8
  0  9  9
-----------
```

注意就是ax，你要知道ax++返回是加之前的，所以永远是0，搞清楚就行