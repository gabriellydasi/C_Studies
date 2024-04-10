/* 
Aula 4
Exemplo da variável do tipo int 
Estruturas de decisão 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// int -> variável do tipo inteiro 
	// idade -> nome da variável
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade); // scanf -> lê o que é digitado
	printf("Idade: %d", idade);
	// %d -> refere-se à variável do tipo inteiro, exibe o conteúdo da variável idade  
	// & -> sempre vem à frente da variável do tipo inteiro
	
	// a linha abaixo executa uma estrutura de decisão 
	if (idade < 18) {// não usa ponto e vírgula na estrura de decisão 'if'
		printf("\n Você é menor de idade! \n");
	}
	if (idade >= 18){
		printf("\n Você é maior de idade!\n");
	}
	system("pause");
	return 0;
}
