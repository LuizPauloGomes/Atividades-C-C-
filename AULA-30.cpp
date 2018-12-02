#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	puts ("calculadora 2.0\n");
	
	float num1, num2, resul;
	char opt = '0';
	
	do{
		
		
		printf("\t 1 - Soma\n");
		printf("\t 2 - Subtração\n");
		printf("\t 3 - Divição\n");
		printf("\t 4 - Multiplicão\n");
		printf("\t 0 - Sair\n");
		
		printf("\t \tescolha a operção: \n");
		 opt = getchar();
		
		
		if(opt!='0'){
				printf("primeiro valor: \n");
		scanf(" %f", &num1);
		printf("segundo valor: \n ");
		scanf(" %f", &num2);
		} if(opt == '1'){
			resul = num1 + num2;
		
		}else if(opt=='2'){
		resul = num1 - num2;
		
		}else if(opt=='3'){
		resul = num1 / num2;
		
		}else if (opt == '4'){
		
			resul = num1 * num2;
		}
		printf("o resultado é: %.2f \n ", resul);
		
		system("pause");
		system("cls");
		
	}while(opt !='0');
}

	
