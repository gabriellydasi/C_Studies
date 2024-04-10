/*
Aula 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // biblioteca de idiomas -> aceita acentuação, símbolos, etc //

int main(){		
	// a linha abaixo configura o idioma para português //
	setlocale(LC_ALL,"Portuguese");
	// a linha abaixo muda a cor do texto. existe uma tabela com cada cor e seu correspondente //
	// é possível mudar o background e a letra, no exemplo abaixo a primeira declaração se refere a cor do background e a segunda a cor da letra //
	// se não houver nenhum dígito duplo, então irá mudar apenas a cor da letra //
	system("color D6");
	printf("Olá, mundo!\n");
	system("pause");
	// a linha abaixo limpa a tela // 
	system("cls");
	system("color F0");
	printf("Gabrielly\n");
	system("pause");
	return 0;
}
