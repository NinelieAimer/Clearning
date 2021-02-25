#include <stdio.h>
int main(void){
    int no;

    do{
        printf("Please enter an integer:");
        scanf("%d",&no);
        if (no<=0){
            printf("Do not enter negative number");
        };
    }while(no<=0);

    printf("The reverse of the number is:");
    while(no>0){
        printf("%d",no%10);
        no/=10;
    };
    puts(".");
    return 0;
}