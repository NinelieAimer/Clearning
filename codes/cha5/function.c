#include <stdio.h>

int max2(int a,int b){
    if (a>b)
    {
        return a;
    } else{
        return b;
    };
    
}
int i,j;

int main(void){
    printf("Please enter first number :"); scanf("%d",&i);
    printf("Please enter second number:"); scanf("%d",&j);

    printf("The higher is %d",max2(i,j));
}