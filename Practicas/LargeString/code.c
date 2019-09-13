#include <stdio.h>

FILE *f;
char c;

int extremlyLargeString()
{
  f = fopen ("fichero.dat", "wb");
  if (f==NULL){
    perror("No se puede abrir fichero.dat");
    return -1;
  }
  else{
    do{
      c = getchar();
      fwrite (&c, 1, 1, f);
    }while(c!= '$');
    fclose(f);
  }
}

int getextremlyLargeString()
{
  f = fopen ("fichero.dat", "rb");
  if (f==NULL){
    perror("No se puede abrir fichero.dat");
    return -1;
  }
  else{
    while(!feof(f)){
      fread (&c, 1, 1, f);
      if(c != '$')
        printf("%c",c);
    }
    fclose(f);
  }
}

int main()
{
    printf("Right your text ending with $\n");
    extremlyLargeString();
    printf("Your text is\n");
    getextremlyLargeString();
    return 0;
}
