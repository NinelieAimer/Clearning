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