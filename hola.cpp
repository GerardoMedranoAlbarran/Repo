#include <string.h>
#include <stdio.h>

void reverse(char text[]){
	for(int i = 0; i<=strlen(text); i++)
        printf("%c",text[strlen(text)-i]);
}
void Numeros(int final){
	for(int i = 1; i<=final;i++){
		if(i%3 ==0 )
			printf("Tres");

		if(i%5==0)
			printf("Cinco");
		if(i%3 != 0 && i%5 != 0){
			for(int j = 0; j < i ; j++)
				printf("%d ",i);
		}
		printf("\n");
	}
}
int main()
{
	//hola
    char text[] = "Hello world!";
    printf("%s\n",text);
	reverse(text);
    return 0;
}

