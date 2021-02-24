#include <stdio.h>
int main(void){
    int month;

    printf("Please enter a mounth:"); scanf("%d",&month);

    if (month>=3 && month<=5)
    {
        printf("%d is in Spring",month);
    } else if (month >=6 && month<=8)
    {
        printf("%d is in summer",month);
    } else if (month>=9 && month<=11)
    {
        printf("%d is in autome",month);
    } else if (month==1 || month==2 || month==12)
    {
        printf("%d is in winter",month);
    } else{
        printf("You didn't enter a month");
    }
    
    return 0;
    
    
    
}