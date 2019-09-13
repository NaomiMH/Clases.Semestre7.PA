#include <stdio.h>

main ()
{
    int row, col;
    printf("row col\n");
    scanf("%d %d",&row,&col);
    int matriz1[row][col], matriz2[row][col], respuesta[row][col];
    for(int i=0; i<row; i++)
        for(int x=0; x<col; x++){
            printf("Matriz 1 row %d col %d\n",i+1,x+1);
            scanf("%d",&matriz1[i][x]);
        }
    for(int i=0; i<row; i++)
        for(int x=0; x<col; x++){
            printf("Matriz 2 row %d col %d\n",i+1,x+1);
            scanf("%d",&matriz2[i][x]);
            respuesta[i][x]=matriz1[i][x]+matriz2[i][x];
        }
    printf("M1+M2\n");
    for(int i=0; i<row; i++){
        for(int x=0; x<col; x++){
            printf("%d ",respuesta[i][x]);
            respuesta[i][x]=matriz1[i][x]-matriz2[i][x];
        }
        printf("\n");
    }
    printf("M1-M2\n");
    for(int i=0; i<row; i++){
        for(int x=0; x<col; x++){
            printf("%d ",respuesta[i][x]);
            respuesta[i][x]=matriz1[i][x]*matriz2[i][x];
        }
        printf("\n");
    }
    printf("M1*M2\n");
    for(int i=0; i<row; i++){
        for(int x=0; x<col; x++){
            printf("%d ", respuesta[i][x]);
        }
        printf("\n");
    }
    return 0;
}
