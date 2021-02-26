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
}