#include <stdio.h>

int instrucciones(char *array)
{
    *(array+4) = 'a';
    *(array+3) = 'e';
    *(array+1) = 'i';
    *(array+0) = 'o';
    *(array+2) = 'u';
    return 0;
}

int main()
{
    char *string;
    char text[5]={"     "};
    string = &text;
    instrucciones(string);
    printf(".%s.",text);
    return 0;
}
