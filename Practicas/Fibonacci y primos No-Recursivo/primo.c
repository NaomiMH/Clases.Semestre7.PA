#include <stdio.h>

int primo(int num,int prueba)
{
    if(prueba>=num/2){
        return 1;
    }
    else if(num%prueba==0){
        return 0;
    }
    return primo(num,prueba+1);
}

int main()
{
    int num;
    scanf("%d",&num);
    if(primo(num,2)){
        printf("\nEs primo");
    }
    else{
        printf("\nNo es primo");
    }
    return 0;
}
