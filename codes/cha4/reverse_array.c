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