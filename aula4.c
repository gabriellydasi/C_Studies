/* 
Aula 4
Exemplo da vari�vel do tipo int 
Estruturas de decis�o 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// int -> vari�vel do tipo inteiro 
	// idade -> nome da vari�vel
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade); // scanf -> l� o que � digitado
	printf("Idade: %d", idade);
	// %d -> refere-se � vari�vel do tipo inteiro, exibe o conte�do da vari�vel idade  
	// & -> sempre vem � frente da vari�vel do tipo inteiro
	
	// a linha abaixo executa uma estrutura de decis�o 
	if (idade < 18) {// n�o usa ponto e v�rgula na estrura de decis�o 'if'
		printf("\n Voc� � menor de idade! \n");
	}
	if (idade >= 18){
		printf("\n Voc� � maior de idade!\n");
	}
	system("pause");
	return 0;
}
