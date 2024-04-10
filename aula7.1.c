/*
Aula 7 - Funções
*/

#include <stdio.h>
#include <stdlib.h>


// ÁREA DE DECLARAÇÕES //
void teste(void); // declaração de função chamada 'teste'
				// a função precisa ser declarada ANTES e DEPOIS do 'main' 

// MAIN //
int main(){ 

	printf("Exemplo de funcao: \n\n");
	teste(); // "chamando" a função 'teste'
	printf("\nFim.\n");
	system("pause");
	return 0;
}

// FUNÇÕES //
void teste(void){
	printf("x = (A + B)(A - B))\n");
}
