#include <stdio.h>
int main(void){
    int a,b;

    puts("Please enter two int numbers;");
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);

    printf("The mean is :%f\n",(double)(a+b)/2);
    printf("The division is :%f",(double)(a/b));
    
    return 0;
}