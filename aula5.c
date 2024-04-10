/*
Aula 5
Exemplo da variável do tipo float 
Estruturas de decisão 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");	
	float nota1, nota2, media; // float -> variável numérica do tipo real, estão na mesma linha por serem do mesmo tipo 
	printf("Digite a nota 1: ");
	scanf("%f", &nota1); // %f -> identifica o tipo de variável, nesse caso, do tipo REAL
	// o '&' sempre vem antes do nome da variável a ser declarada!! 
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2; // fórmula da média
	printf("Média: %.2f \n", media); // exibir o conteúdo da variável 'media'
	// '.2' determina o número de casas decimais, nesse caso, apenas 2 casas decimais
	if (media < 6) {// só não usa o ';' na estrutura condicional 
		printf("\nREPROVADO(A)!\n)");
	}
	else {
		printf("\nAPROVADO(A)!\n");
	}
	system("pause");
	return 0;	
}

