#include<stdio.h>

int main(void){
    int i;
    int a[5]={17,22,45};
    int v[5];

    for ( i = 0; i < 5; i++)
    {
        v[i]=a[i];
    };
    for (i=0;i<5;i++){
        printf("%4d%4d \n",a[i],v[i]);
    };
    return 0;
    
}