/*
Aula 1 
Introdução 
*/

// as linhas abaixo "chamam" as bibliotecas//
// bibliotecas = conjunto, subcoleções de códigos e funções pré-definidas para usarmos//
#include <stdio.h> //entrada e saída//
#include <stdlib.h> //funções básicas do sistema//

/* comentários em bloco (ele é ignorado, serve para explicar um trecho do código */
// comentário em linha //

int main(){
	
// main = ponto de partida // 
// argc =  n de linhas //
// argv  = conteúdo das linhas //
// char = tipo de variável = aceita qualquer coisa (caractere, número, etc) //
// linguagem C é case sensitive = diferencia minúsculo de maiúsculo //
// cada linha de código fecha com ';' //

	printf("\n Hello, world!\n"); // '\n' pula para a próxima linha //
	system("pause"); // gera uma pausa e espera pressionar uma tecla para continuar //
	return 0; // 'return 0'; = função de retorno ao main, '0' = encerrou sem problema //
	
}

// 1o: compila //
// 2o: executa //
// ou compila e executa ao mesmo tempo // 

