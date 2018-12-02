#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define alturaMaxima 225

typedef struct{
		int peso, altura;
}pesoAltura;

int main(){
	pesoAltura pessoa1;
	
	pessoa1.peso = 80;
	pessoa1.altura = 175;
	
	printf("Peso: %i, Altura: %.i \n", pessoa1.peso, pessoa1.altura );
	if(pessoa1.altura>alturaMaxima)
	printf("ALTURA MAXIMA DA MAXIMA \n");
	else
	printf("ALTURA BAIXA DA MAXIMA \n");
return 0;	
}
