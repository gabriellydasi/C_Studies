/*
Aula 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // biblioteca de idiomas -> aceita acentua��o, s�mbolos, etc //

int main(){		
	// a linha abaixo configura o idioma para portugu�s //
	setlocale(LC_ALL,"Portuguese");
	// a linha abaixo muda a cor do texto. existe uma tabela com cada cor e seu correspondente //
	// � poss�vel mudar o background e a letra, no exemplo abaixo a primeira declara��o se refere a cor do background e a segunda a cor da letra //
	// se n�o houver nenhum d�gito duplo, ent�o ir� mudar apenas a cor da letra //
	system("color D6");
	printf("Ol�, mundo!\n");
	system("pause");
	// a linha abaixo limpa a tela // 
	system("cls");
	system("color F0");
	printf("Gabrielly\n");
	system("pause");
	return 0;
}
