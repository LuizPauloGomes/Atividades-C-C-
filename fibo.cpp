#include<stdlib.h>
#include<stdio.h>

int main(){
	puts("Sequencia de fibonacci\n");
	
	int a=0, b=1;
	
	int x, y, resul;
	
	printf("At� quanto ira a sequncia ?"); scanf(" %d", &x);
	
	for(y=0;y < x; y++){
		resul = a + b;
		a = b;
		b = resul;
		printf("%d \n", resul);
	}
	
	
	
	return 0;
}
