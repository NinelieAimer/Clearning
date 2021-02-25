#include <stdio.h>
int main(void){
    int hand;

    do{
        printf("Please enter an integer between 0,1,2:"); scanf("%d",&hand);
    }while(hand<0 || hand>2);
    
    printf("You choose:");
    switch (hand)
    {
    case 0:
        printf("石头");
        break;
    
    case 1:
        printf("剪刀");
        break;
    case 2:
        printf("布");
        break;
    };
    return 0;
}
