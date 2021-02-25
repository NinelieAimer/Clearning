#include <stdio.h>
int main(void){
    int n1,n2;
    printf("Please enter n1:"); scanf("%d",&n1);
    printf("Please enter n2:"); scanf("%d",&n2);

    printf("The max one is %d",n1>n2?n1:n2);
    return 0; 
}