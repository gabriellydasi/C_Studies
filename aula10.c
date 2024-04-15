#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Aula 10
Arrays
*/
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float nota1 = 8;
	float nota2 = 6;
	float nota3 = 9;
	float nota4 = 3;
	
	// exibindo o conteúdo da variável nota3 sem o uso do array 
	printf("Sem array\n");
	printf("Nota 3: %.1f\n", nota3);
	
	// a linh abaixo cria um array de tamanho 4
	float notas[4]={8,6,9,3};
	printf("Com array\n");
	printf("Nota 3: %.1f\n", notas[2]);
	
	// a linha abaixo modifica o conteúdo de um array 
	notas[1] = 7;
	printf("Modificando o conteúdo do array\n");
	printf("Nota 2: %.1f\n", notas[1]);
	
	// a linha abaixo cria um array de duas dimensões conforme boletim do aluno 
	float boletim [2][4] = {{8, 7, 9, 3},{4, 5, 8, 6}}; // [2] -> linha, [4] -> coluna
	
	// recuperando a nota de português do 1o bimestre 
	printf("Array multidimensional\n");
	printf("Nota: %.1f\n", boletim[1][0]);
	system("pause");
	return 0;
	
	// cada linha e coluna começa por 0!! 
}
