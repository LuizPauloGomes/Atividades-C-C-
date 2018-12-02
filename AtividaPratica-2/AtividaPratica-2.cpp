#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>

int main(void){
	setlocale (LC_ALL, "PORTUGUESE");
	
	char nomeAluno[11][80];
	float nota[11];
	int faltas;
	
	for(int x=0; x<=10; x++){
		printf("digite o nome do aluno: ");	gets(nomeAluno[x]);
//		printf("\n Digite a nota do aluno: "); scanf(" %f", &nota[x]);
		
	}
	for(int i=0; i<=10; i++){
		printf("Nomes dos alunos: %s \n", nomeAluno[i]);
//		printf("nota: %.2f", nota[i]);
	}
	
	
	
	return 0;
}
