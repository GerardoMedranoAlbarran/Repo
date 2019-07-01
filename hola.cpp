#include <stdio.h>

int main()
{
    char text[] ="Hola Mundo!";
    printf("%s\n",text);
    //printf("%d\n",strlen(text));
    for(int i = 0; i<=strlen(text); i++){
        printf("%c",text[strlen(text)-i]);   
    }
    return 0;
}