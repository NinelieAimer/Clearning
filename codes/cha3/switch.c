#include <stdio.h>
int main(void){
    int sw;

    printf("Enter an integer:"); scanf("%d",&sw);

    switch (sw)
    {
    case 1:
        puts("A"); puts("B");
        break;
    
    case 2:
        puts("c"); 
        
    case 5:
        puts("d");
        break;
    case 6:
    case 7:
        puts("e"); 
        break;
    default: 
        puts("f"); break;
    }
    return 0;
}