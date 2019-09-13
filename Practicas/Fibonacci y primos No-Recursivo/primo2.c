#include <stdio.h>

int primo(int num,int prueba)
{
    int flag = 0;
    while(flag == 0){
        if(prueba >= num/2)
            flag = 1;
        else{
            if(num%prueba == 0)
            flag = 2;
            else
            prueba = prueba + 1;
        }
    }
    return flag;
}

int main()
{
    int num;
    scanf("%d",&num);
    if(primo(num,2) == 1){
        printf("\nEs primo");
    }
    else{
        printf("\nNo es primo");
    }
    return 0;
}
