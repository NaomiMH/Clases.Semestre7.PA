#include <stdio.h>

int main()
{
    int num,sum,ant,antant;
    sum=ant=0;
    antant=1;
    scanf("%d",&num);
    printf("\nf = %d",sum);
    if(num>1){
        for(int i=1; i<= num; i++){
            sum=sum+antant;
            printf("\nf = %d",sum);
            antant=ant;
            ant=sum;
        }
    }
    else{
        printf("\nf = %d",sum);
        sum=1;
    }
    printf("\n%d",sum);
    return 0;
}
