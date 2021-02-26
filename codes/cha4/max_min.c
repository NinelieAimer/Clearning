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

    min=max=tensu[0]; //默认第一个最大

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