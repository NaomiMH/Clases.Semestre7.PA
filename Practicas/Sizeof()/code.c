#include <stdio.h>
#include <float.h>

int main()
{
    int entero;
    float flt;
    char chr[1];
    
    printf("Integer\n");
    scanf("%d",&entero);
    printf("Your integer %d storage size is %d bytes.\n",entero,sizeof(entero));
    printf("Char\n");
    scanf("%s",&chr);
    printf("Your char %s storage size is %d bytes. And I can read it as %s or as %d.\n",chr,sizeof(chr),chr,chr);
    printf("Float\n");
    scanf("%f",&flt);
    printf("Your double %f storage size is %d bytes, I can read any number from %f to %f in this data type.\n",flt,sizeof(flt),FLT_MIN,FLT_MAX);
    return 0;
}
