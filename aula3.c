/* 
Aula 3 
Uso da vari�vel do tipo char 
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	// char: tipo de vari�vel que aceita caracteres 
	// o valor [50] delimita o tamanho de caracteres 
	char nome[50];
	printf("Digite o seu nome: ");
	// gets: mesmo sentido do (leia)
	gets(nome);
	system("cls"); // apaga a tela 
	printf("Bem vindo(a), %s!\n",nome);
	// %s -> refere-se � vari�vel 'nome', avisa � mem�ria que o tipo de vari�vel � caractere
	system("pause");
	return 0;	
}
