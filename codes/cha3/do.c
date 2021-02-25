#include<stdio.h>
int main(void){
    
    int retry; //这里就不用重复声明变量了

    do{
        int no;

        printf("Please enter an integer:"); scanf("%d",&no);

        if (no % 2)
        {
            printf("This number is an single\n");
        } else{
            puts("This number is another");
        };

        printf("Do you want to retry?yes.....1/No....0:"); scanf("%d",&retry); 
        
    }while(retry==1);
    
}