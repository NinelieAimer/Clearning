#include <stdio.h>

void put_stars(int n){
    while(n-->0){
        putchar('*');
    };
};

int main(void){
    int i,len;

    printf("Print an angle\n");
    printf("long:");
    scanf("%d",&len);

    for (i=1;i<=len;i++){
        put_stars(i);
        putchar('\n');
    };
}