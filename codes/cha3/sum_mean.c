#include <stdio.h>
int main(void){
    int sum=0;
    int cnt=0;
    int retry;

    do{
        int t;
        printf("Enter an integer:"); scanf("%d",&t);
        sum+=t;
        cnt++;

        printf("Do you want to retry?yse.....1/No...0"); scanf("%d",&retry);
    }while(retry==1);

    printf("Sum is %d , mean is %.2f.",sum,(double)sum/cnt);
    return 0;
}