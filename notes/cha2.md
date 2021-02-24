## c运算和数据类型

### 运算

#### 运算和操作符

- 值得注意的就是运算符号==**/和%**==，第一个是**整除**，第二个是除余，第二个好理解，第一个要注意和python不一样，他会舍弃小数点，==当在printf中真的想输出%时候，可以使用%%==

### 数据类型

> ​	在C语言中，数据类型是很重要的东西，无论408还是写代码过程中，一定要搞懂这个

- 整数之间运算时候，**只能得到整数**，但是**浮点数之间的运算，除法是可以出现小数点的**，只是在最后printf的时候记得要用%f这个符号。
- 整数一般用int类型，浮点数通常用double就行了
- **doble类型变量通过scanf函数赋值的时候用%lf，但是在输出的时候就是用%f**
- C语言是会进行**隐式转换的**，比如如果**int/double**，结果可以出现小数点的，就是Int隐式转换变成了double类型

```c
#include <stdio.h>
int new_main(void){
    int  n1,n2,n3,n4;
    double d1,d2,d3,d4;

    n1=2/2.0;
    n2=5.0/2.0;
    n3=5.0/2;
    n4=5/2.0;

    d1=5/2;
    d2=5.0/2.0;
    d3=5.0/2;
    d4=5/2.0;

    printf("n1=%d\n",n1);
    printf("n2=%d\n",n2);
    printf("n3=%d\n",n3);
    printf("n4=%d\n",n4);

    printf("d1=%f\n",d1);
    printf("d2=%f\n",d2);
    printf("d3=%f\n",d3);
    printf("d4=%f\n",d4);

    return 0;

};
int main(void){
    int a;
    double b;

    printf("Please enter a int number:"); scanf("%d",&a);
    printf("Please enter a double number:"); scanf("%lf",&b);

    printf("divide result is %f\n",a/b);
    new_main();
    return 0;
}
=====
Please enter a int number:5
Please enter a double number:2.0
divide result is 2.500000
n1=1
n2=2
n3=2
n4=2
d1=2.000000
d2=2.500000
d3=2.500000
d4=2.500000
```

### 类型转换

有特定数据类型，肯定转换类型就重要多了我们先介绍不需要小数点约束的类型转换，直接用**（）**里面写上数据类型，放在数字前面就行

```c
#include <stdio.h>
int main(void){
    int a,b;

    puts("Please enter two int numbers;");
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);

    printf("The mean is :%f\n",(double)(a+b)/2);
    printf("The division is :%f",(double)(a/b));
    
    return 0;
}
========
Please enter two int numbers;
a=5
b=2
The mean is :3.500000
The division is :2.000000
```

转换是有先后顺序的，上面例子就是好榜样

*****

再来一种，需要定义几位小数点的数据类型转换，我们先看一个基础理论

**%09.9f**，这个意思是：

- 0的意思是如果数字前面有空余位用0补，没有就用空格补全
- 9是最小显示9个字符，实际时候超过会显示必要位数，这个是小数加上整数位数，应该可以说是有效位数
- 后面.9f意思保9未小数点
- -就会右对齐，不然就是左对齐

```c
#include <stdio.h>
int main(void){
    printf("[%d]\n",123);
    printf("[%.4d]\n",123);
    printf("[%4d]\n",123);
    printf("[%05.1f]\n",123.13);
    return 0;
}
=====
[123]
[0123]
[ 123]
[123.1]
```

**这个例子非常重要，第一个很简单，第二个用0补全了前面，这个显示4位有效数字，第三个也是，第四个，说明先取有效数字，再取精度**