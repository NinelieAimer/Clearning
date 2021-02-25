#include <stdio.h>

int main(void){
    int no;

    printf("Please enter an integer:"); scanf("%d",&no);

    while(no>=0){
        printf("%d\n",no--);  //这里非常重要，这里输出的是no减之前的值
    };
    return 0;
}