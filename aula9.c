/*
Aula 9
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // ferramenta para mensurar tempo 

int opcao; 

int main(int argc, char *argv[]){
	do{
		system("cls");
		setlocale(LC_ALL, "Portuguese");
		printf("---------------------\n");
		printf("|    JOGO DO DADO   |\n");
		printf("---------------------\n");
		printf("1) GERAR UM N�MERO \n");
		printf("2) SAIR\n");
		printf("\n");
		printf("Escolha uma op��o: ");
		scanf("%d", &opcao);
		printf("\n");
		switch(opcao)
		{
			case 1: 
				srand(time(NULL)); // inicia o gerador de n�meros aleat�rios
				printf("Face: %d\n\n", rand()%6+1); // 'rand()%6' gerador de n�meros aleat�rios entre 0 e 5
				break;
		
			case 2:
				printf("Saindo...\n\n");
				break;	
		
			default:
				printf("Op��o inv�lida!\n\n");	
				break;
		 }	 		
	}while(opcao != 2);
	system("pause");
	return 0;
}

