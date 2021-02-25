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