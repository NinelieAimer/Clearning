## 各种语句

### if语句

> ​	大名鼎鼎的if语句，作用不言而喻，代码如下

```c
#include <stdio.h>

int main(void){
    int no;

    printf("Please enter an int number:"); scanf("%d",&no);
    if (no % 5)
    {
        puts("The number can't be divide correctly");
    
    }
    return 0;
}

======
Please enter an int number:8 
The number can't be divide correctly
```

**唯一要注意的地方就是不是0的时候执行，你以前一直记错了**

```c
#include <stdio.h>
int new_main(void){
    int final;

    printf("Please enter a number:"); scanf("%d",&final);

    if (final % 5)
    {
        puts("This number can't be divided");
    }else{
        puts("This number can be divided");
    }

    return 0;
};

int main(void){
    int no;

    printf("Please enter an int number:"); scanf("%d",&no);
    if (no % 5)
    {
        puts("The number can't be divide correctly");
    
    }
    new_main();
    return 0;
}
=====
Please enter an int number:8
The number can't be divide correctly
Please enter a number:10
This number can be divided
```

```c
#include <stdio.h>
int main(void){
    int month;

    printf("Please enter a mounth:"); scanf("%d",&month);

    if (month>=3 && month<=5)
    {
        printf("%d is in Spring",month);
    } else if (month >=6 && month<=8)
    {
        printf("%d is in summer",month);
    } else if (month>=9 && month<=11)
    {
        printf("%d is in autome",month);
    } else if (month==1 || month==2 || month==12)
    {
        printf("%d is in winter",month);
    } else{
        printf("You didn't enter a month");
    }
    
    return 0;
    
    
    
}
```



### switch和break

> ​	break是老熟人了就不多说，就是switch主要是用在**同一表达式判断的**，而且每个语句最末尾都一定要加上**break**，否则语句输出会默认到下一句，很麻烦的

```c
#include <stdio.h>
int main(void){
    int sw;

    printf("Enter an integer:"); scanf("%d",&sw);

    switch (sw)
    {
    case 1:
        puts("A"); puts("B");
        break;
    
    case 2:
        puts("c"); 
        
    case 5:
        puts("d");
        break;
    case 6:
    case 7:
        puts("e"); 
        break;
    default: 
        puts("f"); break;
    }
    return 0;
}
```

### do语句

> ​	这个是循环语句的一种，其实不是很常用应该，这个一般是要配合while语句进行使用的，先执行一次，再判断。特别适用于输入是否要重复的操作，还是有用的

**do [code] while(表达式)**的形式

```c
#include<stdio.h>
int main(void){
    
    int retry; //这里就不用重复声明变量了

    do{
        int no;

        printf("Please enter an integer:"); scanf("%d",&no);

        if (no % 2)
        {
            printf("This number is an single\n");
        } else{
            puts("This number is another");
        };

        printf("Do you want to retry?yes.....1/No....0:"); scanf("%d",&retry); 
        
    }while(retry==1);
    
}
```

**这里要注意的地方就是，满足while里面的条件才会循环**

```c
#include <stdio.h>
int main(void){
    int hand;

    do{
        printf("Please enter an integer between 0,1,2:"); scanf("%d",&hand);
    }while(hand<0 || hand>2);
    
    printf("You choose:");
    switch (hand)
    {
    case 0:
        printf("石头");
        break;
    
    case 1:
        printf("剪刀");
        break;
    case 2:
        printf("布");
        break;
    };
    return 0;
}

```

```c
#include <stdio.h>
int main(void){
    int sum=0;
    int cnt=0;
    int retry;

    do{
        int t;
        printf("Enter an integer:"); scanf("%d",&t);
        sum+=t;
        cnt++;

        printf("Do you want to retry?yse.....1/No...0"); scanf("%d",&retry);
    }while(retry==1);

    printf("Sum is %d , mean is %.2f.",sum,(double)sum/cnt);
    return 0;
}
```

### 复合运算符

我们直接列举吧，都是老熟人了

- +=，++，--，这种都见的很多了，这里重点提一下++和--
- 后置的++，和--的意思是加和减，但是这个表达式的值是增加前的值
- 前置的++和--的区别是这个表达式的值是递增后的值

### while语句

> ​	老熟人了，这个是先判断再循环，老熟人了，和python一样的，直接写个语句过了

```c
#include <stdio.h>

int main(void){
    int no;

    printf("Please enter an integer:"); scanf("%d",&no);

    while(no>=0){
        printf("%d\n",no--);  //这里非常重要，这里输出的是no减之前的值
    };
    return 0;
}
```

### 字符串常量和putchar函数

- **在C之中，双引号和单引号意义是不同的，单引号只能用于单个字符（而且不能是中文），双引号是字符串，如果要输出单个字符用putchar函数，其实大部分情况没用**

```c
putchar('A');
printf("A");
```

一个小小的例子循环的

```C
#include <stdio.h>
int main(void){
    int no;

    do{
        printf("Please enter an integer:");
        scanf("%d",&no);
        if (no<=0){
            printf("Do not enter negative number");
        };
    }while(no<=0);

    printf("The reverse of the number is:");
    while(no>0){
        printf("%d",no%10);
        no/=10;
    };
    puts(".");
    return 0;
}
```

### for语句

> ​	这个语句在循环的时候有大作用，有点像pipline一样的循环

- for(表达式；表达式；表达式)

  - 第一个表达式是预处理，**仅仅执行一次**，这一次就是在一开始进入循环的时候；**这个表达式可以省略的**
  - 第二个表达式至关重要，这个是判断是否执行循环的重要条件；**这个一般不省略，省略就无限循环的了，很麻烦的，除非有break**
  - 第三个表达式是收尾处理，要执行完了循环体才会执行的东西，为下一次循环准备。**这个可以省略**

  预处理——判断条件——收尾处理

```c
//计算平均值和和
#include<stdio.h>

int main(void){
    int i=0;
    int sum=0;
    int num,tmp;

    printf("How many numbers dou you want to enter:"); scanf("%d",&num);

    for ( i = 0; i < num; i++)
    {
        printf("No.%d:",i+1);
        scanf("%d",&tmp);
        sum+=tmp;
    };
    printf("The sum is %d\n",sum);
    printf("Mean is %.2f",(double)sum/num);
    return 0;
    
}
```

### 多重循环

> ​	就是嵌套循环，但是要技巧就是了

#### 二重循环

```c
#include <stdio.h>

int main(void){
    int i,j;

    for (i=1;i<=9;i++){
        for (j=1;j<=9;j++){
            printf("%3d",i*j);
        };
        putchar('\n');
    };

    return 0;
}
=========

  1  2  3  4  5  6  7  8  9
  2  4  6  8 10 12 14 16 18
  3  6  9 12 15 18 21 24 27
  4  8 12 16 20 24 28 32 36
  5 10 15 20 25 30 35 40 45
  6 12 18 24 30 36 42 48 54
  7 14 21 28 35 42 49 56 63
  8 16 24 32 40 48 56 64 72
  9 18 27 36 45 54 63 72 81
```

这里一定要注意语句范围，调试，putchar不能写在大括号里面

**这里可以记住，外侧时候是纵向的循环，内侧for是控制行**

这里循环学的实际意义不大，就不深入学习了，、

### continue

> ​	这个和python的意义一样，是用来跳出循环的

```c
#include <stdio.h>

int main(void){
    int i,j;

    for (i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            int seki=i*j;
            if (seki%10==4 || seki/10==4){
                printf("   ");
                continue;
            };
            printf("%3d",seki);
        };
        printf("\n");
    };
    return 0;
}   

===========

 1  2  3     5  6  7  8  9
  2     6  8 10 12    16 18
  3  6  9 12 15 18 21    27
     8 12 16 20    28 32 36
  5 10 15 20 25 30 35
  6 12 18    30 36
  7    21 28 35       56 63
  8 16    32       56    72
  9 18 27 36       63 72 81
```

**在C中，字符串不能乱换行的，不然会出事，举个例子**

```c
printf("long long ago
	teste sdfd fa") \\这样是错的，不能这么写
printf("long long long "
      			"sdfsdfsdf") //这样才行
```

