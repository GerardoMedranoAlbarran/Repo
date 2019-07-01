#include <stdio.h>

int main(){
	for(int i = 1; i<=100;i++){
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
	return 0;
}