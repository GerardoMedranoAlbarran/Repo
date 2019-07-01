#include <string.h>
#include <stdio.h>

void reverse(char text[]){
	for(int i = 0; i<=strlen(text); i++)
        printf("%c",text[strlen(text)-i]);
}

int main()
{
	//hola
    char text[] = "Hello world!";
    printf("%s\n",text);
	reverse(text);
    return 0;
}

