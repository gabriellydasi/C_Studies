/*
Aula 6
Switch Case
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero; // declara��o de vari�vel global precisa ser antes do 'int main()

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Sistemas \n\n"); // '\n\n' -> pula 2 linhas  
	printf("1) Windows\n");
	printf("2) Linux\n");
	printf("3) Sair\n");
	printf("\nEscolha a op��o desejada: ");
	scanf("%d", &numero);
	switch(numero){ // n�o usa ';'
	
		case 1: // mesmo sentido de 'escolha'
			system("cls");
			printf("Iniciando Windows...\n");
			break;
			
		case 2: 
			system("cls");
			printf("Iniciando Linux...\n");
			break;
		
		case 3: 
			system("cls");
			printf("Saindo...\n");
			break;	
			
		default: // caso n�o fa�a parte de nenhum dos casos
			printf("\nOp��o inv�lida\n");
	}
	system("pause");
	return 0;	
}
