/*
Aula 6
Switch Case
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero; // declaração de variável global precisa ser antes do 'int main()

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Sistemas \n\n"); // '\n\n' -> pula 2 linhas  
	printf("1) Windows\n");
	printf("2) Linux\n");
	printf("3) Sair\n");
	printf("\nEscolha a opção desejada: ");
	scanf("%d", &numero);
	switch(numero){ // não usa ';'
	
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
			
		default: // caso não faça parte de nenhum dos casos
			printf("\nOpção inválida\n");
	}
	system("pause");
	return 0;	
}
