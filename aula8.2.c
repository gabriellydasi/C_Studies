/*
Aula 8.2
Criar uma �rvore usando la�os de repeti��es
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
	
	// la�o principal define o tamanho da �rvore
	for(i=1; i<=tamanho; i++){
		// la�o que define o espa�amento
		for(j=1; j<=tamanho-i; j++){
			printf(" ");
		}
		// la�o que desenha a �rvore 
		for(star = 1; star <=i*2-1; star++){
			printf("*");
		}
		printf("\n");
    }
	printf("\n");
	system("pause");
	return 0;
}
