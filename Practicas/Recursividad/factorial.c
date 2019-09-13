#include <stdio.h>

int factorial(int num)
{
    if(num==1)
        return 1;
    else
        return num*factorial(num-1);
}

int main()
{
    int cant;
    scanf("%d",&cant);
    printf("%d",factorial(cant));
    return 0;
}
