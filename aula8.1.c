#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Aula 8.1 
Estruturas de repetição 'do-while', 'for' 
*/
int numero, resposta;
int contador = 1;

int main(){

do{	
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	printf("-------------------------------\n");
	printf("|            TABUADA          |\n");
	printf("-------------------------------\n");
	printf("\nDigite o número da tabuada: ");
	scanf("%d", &numero);
	printf("\n");
	// a linha abaixo gera um laço FINITO
	for(contador = 1; contador <= 10; contador++){
		printf("%d x %d = %d \n", numero, contador, numero*contador);
		/* o primeiro %d refere-se ao 'numero' e o segundo ao 'contador' e o terceiro
		 ao produto do numero pelo contador	*/	
	}
	printf("\n");
	printf("1) NOVO CÁLCULO\n");
	printf("2) SAIR\n");
	printf("\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &resposta);
	
}while(resposta != 2); //'!=' -> diferente 
	system("pause");
	return 0;
}
	
