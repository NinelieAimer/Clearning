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

