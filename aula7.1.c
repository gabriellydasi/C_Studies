/*
Aula 7 - Fun��es
*/

#include <stdio.h>
#include <stdlib.h>


// �REA DE DECLARA��ES //
void teste(void); // declara��o de fun��o chamada 'teste'
				// a fun��o precisa ser declarada ANTES e DEPOIS do 'main' 

// MAIN //
int main(){ 

	printf("Exemplo de funcao: \n\n");
	teste(); // "chamando" a fun��o 'teste'
	printf("\nFim.\n");
	system("pause");
	return 0;
}

// FUN��ES //
void teste(void){
	printf("x = (A + B)(A - B))\n");
}
