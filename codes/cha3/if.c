#include <stdio.h>
int new_main(void){
    int final;

    printf("Please enter a number:"); scanf("%d",&final);

    if (final % 5)
    {
        puts("This number can't be divided");
    }else{
        puts("This number can be divided");
    }

    return 0;
};

int main(void){
    int no;

    printf("Please enter an int number:"); scanf("%d",&no);
    if (no % 5)
    {
        puts("The number can't be divide correctly");
    
    }
    new_main();
    return 0;
}

