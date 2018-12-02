#include<stdio.h>
#include<stdlib.h>

int main(){
	int x = 25;
	int* y = &x;
	*y = 30;
	
	printf("valor altura de  X: %i \n", x );
	
	return 0;
}
