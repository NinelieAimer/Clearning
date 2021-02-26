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