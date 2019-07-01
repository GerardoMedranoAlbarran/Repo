#include <stdio.h>

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


int main(){
	Numeros(25);
	return 0;
}