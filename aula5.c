/*
Aula 5
Exemplo da vari�vel do tipo float 
Estruturas de decis�o 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");	
	float nota1, nota2, media; // float -> vari�vel num�rica do tipo real, est�o na mesma linha por serem do mesmo tipo 
	printf("Digite a nota 1: ");
	scanf("%f", &nota1); // %f -> identifica o tipo de vari�vel, nesse caso, do tipo REAL
	// o '&' sempre vem antes do nome da vari�vel a ser declarada!! 
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2; // f�rmula da m�dia
	printf("M�dia: %.2f \n", media); // exibir o conte�do da vari�vel 'media'
	// '.2' determina o n�mero de casas decimais, nesse caso, apenas 2 casas decimais
	if (media < 6) {// s� n�o usa o ';' na estrutura condicional 
		printf("\nREPROVADO(A)!\n)");
	}
	else {
		printf("\nAPROVADO(A)!\n");
	}
	system("pause");
	return 0;	
}

