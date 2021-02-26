## 数组

> ​	数组是一个很重要的概念，有联系到python的numpy和pandas的基本原理这类东西，也是数据读取的基础东西

- 同一类型的变量——**元素**集中在一起，在内存上排成一条直线

### 数组

#### 数组声明、访问、遍历

声明肯定就是指定元素类型，然后进行储存，这个比python麻烦，但是速度远远快于python的列表，接近pandas数组，一段代码，我们来看懂声明，访问和遍历

```c
#include<stdio.h>

int main(void){
    int v[5]; //这是声明一个5个元素的数组，其中类型是int类型
    int i,j;

    //第一种赋值方法
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    v[4]=5;

    printf("The first number is:%d\n",v[0]); //读取第一个值

    //第二种赋值方法，循环赋值
    for (i=0;i<5;i++){
        v[i]=i+1;
    };

    //遍历打印出来
    
    for (j=0;j<5;j++){
        printf("v[%d]=%d\n",j,v[j]);
    };
    return 0;
}#include<stdio.h>

int main(void){
    int v[5]; //这是声明一个5个元素的数组，其中类型是int类型
    int i,j;

    //第一种赋值方法
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    v[4]=5;

    printf("The first number is:%d\n",v[0]); //读取第一个值

    //第二种赋值方法，循环赋值
    for (i=0;i<5;i++){
        v[i]=i+1;
    };

    //遍历打印出来
    
    for (j=0;j<5;j++){
        printf("v[%d]=%d\n",j,v[j]);
    };
    return 0;
}

==========
The first number is:1
v[0]=1
v[1]=2
v[2]=3
v[3]=4
v[4]=5
```

#### 数组的初始化

> ​	我们不可能每次都用遍历赋值，实在是有点麻烦，所以可以用类似于python方法进行赋值，就有了数组初始化

- 第一种初始化，知道数据个数的，如果写错了个数如果是大括号里少了，其他就会用0赋值，如果大括号多了，**会报错**

  - ```c
    int v[5]={1,2,3,4,5};
    ```

- 第二种，通常情况下常用的，我们不知道里面多少个数字，所以这个常用，方法就是中括号里面东西，不填

  - ```c
    int v[]={1,2,3,4,5};
    ```

- 最后有一个，可以将数组里面的数字全部变成0，**注意，只有在初始化的时候才能够这样做，切忌在中间这样做**

  - ```c
    int v[3]={0};
    int v[5];	//我推荐这样，方便快捷
    ```

  应该懂什么意思

#### 数组复制

> ​	数组复制，没有python那种copy那么简单，因为C是比较底层的，可能有包，但是学习期间别用，数组复制关键就是要创立一个新的数组，然后赋值，简单不。

```c
#include<stdio.h>

int main(void){
    int i;
    int a[5]={17,22,45};
    int v[5];

    for ( i = 0; i < 5; i++)
    {
        v[i]=a[i];
    };
    for (i=0;i<5;i++){
        printf("%4d%4d \n",a[i],v[i]);
    };
    return 0;
    
}
```

#### 数组元素倒序排列

> ​	这个肯定有更加简单方法，但是由于要考数据结构，要学习一下，原理很简单，无非就是创一个临时变量，然后进行调换

```c
#include<stdio.h>

int main(void){
    int i;
    int x[7];

    for(i=0;i<7;i++){

        printf("Please enter a integer:"); scanf("%d",&x[i]);
    };

    for (i=0;i<3;i++){ //这里特别重要循环多少次问题，奇数项减一，一半，偶数直接除以2
        int temp =x[i];
        x[i]=x[6-i];
        x[6-i]=temp;
    };
    puts("The array has beeb reversed");

    for (i=0;i<7;i++){
        printf("x[%d]=%d\n",i,x[i]);
    };
    return 0;
}
```

#### 对象式宏

> ​	本阶段不用太在意这个，你可以理解为预处理时候产生全局变量，参数名一般大写，就差不多了

```c
#define a b	//a是参数名，b是具体表达式或者东西
```

不多说啥，直接上代码

```c 
#include<stdio.h>
#define NUMBER 5

int main(void){
    int i;
    int tensu[NUMBER];
    int sum=0;

    printf("Please enter %d students grade\n",NUMBER);

    for (i=0;i<NUMBER;i++){
        printf("%2d number:",i+1); scanf("%d",&tensu[i]);
        sum+=tensu[i];
    };
    printf("SUM:%5d\n",sum);
    printf("mean:%5.2f\n",(double)sum/NUMBER);
    return 0;
}

=========
Please enter 5 students grade
 1 number:2
 2 number:3
 3 number:4
 4 number:5
 5 number:6
SUM:   20
mean: 4.00
```

#### 数组元素的最大值和最小值

> ​	这玩意Python也很简单，但是数据结构要考，还是要准备的，原理其实不难。首先默认第一个是最小值，且最大值，然后和后面分别比较，分别选出，比完就知道了

```c
#include <stdio.h>

#define NUMBER 5

int main(void){
    int i;
    int tensu[NUMBER];
    int max,min;

    printf("Please enter %d students garde\n",NUMBER);
    for (i=0;i<NUMBER;i++){
        printf("%2d Number:",i+1); scanf("%d",&tensu[i]);
    };

    min=max=tensu[0]; //默认第一个最大，同时赋值，可以了解一下，但是不能用在初始化

    for (i=0;i<NUMBER;i++){
        if(tensu[i]>max){
            max=tensu[i];
        };
        if (tensu[i]<min)
        {
            min=tensu[i];
        };
    };
    printf("Max number is:%d",max);
    printf("Min number is:%d",min);

    return 0;
}
```

#### 数组元素个数

> ​	这个可以作为练习看看就行

```c
#include<stdio.h>

#define NUMBER 80

int main(void){
    int i,j;
    int num;
    int tensu[NUMBER];
    int bunpu[11]={0};

    printf("Please students number:");

    do{
        scanf("%d",&num);
        if (num<1 || num>NUMBER)
        {
            printf("Please enter number 1~%d",NUMBER);
        };
        
    }while(num<1 || num>NUMBER);

    printf("Please enter %d number grade.\n",num);

    for (i=0;i<num;i++){
        printf("%2d number :",i+1); scanf("%d",&tensu[i]);
        if(tensu[i]<0|| tensu[i]>100){
            printf("You enter an wrong grade");

        }while(tensu[i]<0||tensu[i]>100); //这里主要是判断是否输错分数
        bunpu[tensu[i]/10]++; //这个很聪明，主数
    };

    puts("---Distribution---");
    printf("     100");
    for (j=0;j<bunpu[10];j++){
        putchar('*'); //非常聪明，输出个数真的厉害,输出100分的
    };
    putchar('\n');

    for (i=9;i>=0;i--){
        printf("%3d-%3d:",i*10,i*10+9);
        for (j=0;j<bunpu[i];j++){
            putchar('*');
        }
        putchar('\n');
    };
    return 0;
}
```

