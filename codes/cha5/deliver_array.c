#include <stdio.h>

#define NUMBER 5

int max_of(int v[],int n){  //这个要注意，声明输入变量是数组的方法，要注意
    int i;
    int max=v[0];
    for (i=1;i<n;i++){
        if(v[i]>max){
            max=v[i];
        };
    };
    return max;
};

int main(void){
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e,max_m;

    printf("Please enter %d students grade \n",NUMBER);
    for (i=0;i<NUMBER;i++){
        printf("[%d] English:",i+1); scanf("%d",&eng[i]);
        printf("math:"); scanf("%d",&mat[i]);

    };
    max_e=max_of(eng,NUMBER);
    max_m=max_of(mat,NUMBER);

    printf("The highest grade of English is %d\n",max_e);
    printf("The highest grade of math is:%d",max_m);

    return 0;
}