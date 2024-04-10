/*
Aula 8.2
Criar uma árvore usando laços de repetições
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

int i, j, star, tamanho;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("FELIZ NATAL! \n\n");
	printf("Tamanho: ");
	scanf("%d", &tamanho);
	printf("\n");
	
	// laço principal define o tamanho da árvore
	for(i=1; i<=tamanho; i++){
		// laço que define o espaçamento
		for(j=1; j<=tamanho-i; j++){
			printf(" ");
		}
		// laço que desenha a árvore 
		for(star = 1; star <=i*2-1; star++){
			printf("*");
		}
		printf("\n");
    }
	printf("\n");
	system("pause");
	return 0;
}
