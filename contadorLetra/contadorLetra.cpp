#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int contV, contC;

void comparador(char tipoLetra){
	
	switch (tipoLetra){
		case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case'u': case 'U':{
			contV++;
			break;
		}
		case ' ':{
			break;
		}
		default:{
			contC++;
			break;
		}
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char frase[100];
	int x, totalLetra=0;
	
	printf("\ncontador tabajara V 00101110\n");
	printf("\n==============================\n");
	
	printf("\nDigite uma frase: "); 
	gets(frase);
	
	
	
	for(x=0; x < strlen(frase); x++){
		comparador(frase[x]);
	
	}
	totalLetra = contV + contC;
	
	printf("total de letras: %d \n", totalLetra);
	printf("total de vogais: %d \n", contV);
	printf("total de consoantes: %d \n", contC);
}
