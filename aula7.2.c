/*
Aula 7.2
Fun��es com passagem de par�metros e retorno 
Calculadora
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FUN��ES DA CALCULADORA
float somar(float num1, float num2){ // par�metros
	return num1 + num2; // retornar valor 
}

float subtrair(float num1, float num2){
	return num1 - num2;
}

float multiplicar(float num1, float num2){
	return num1 * num2;
}

float dividir(float num1, float num2){
	return num1 / num2;
}

float CalcularPorcentagem(float num1, float num2){
	return (num1 * num2)/100;
}


int main(int argc, char *argv []) {
	setlocale(LC_ALL,"Portuguese");
	int opcao; 
	float num1, num2, resultado;
	printf("CALCULADORA\n");
	printf("----------------------------------------\n");
	printf("Digite o valor do primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o valor do segundo n�mero: ");
	scanf("%f", &num2);
	printf("----------------------------------------\n");
	printf("1. SOMAR\n");
	printf("2. SUBTRAIR\n");
	printf("3. MULTIPLICAR\n");
	printf("4. DIVIDIR\n");
	printf("5. PORCENTAGEM\n");
	printf("\n");
	printf("Escolha a op��o desejada: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			resultado = somar(num1, num2); // o nome dos par�metros precisam ser iguais ao que est� na fun��o
			break;
		case 2:
			resultado = subtrair(num1, num2);
			break;
		case 3:
			resultado = multiplicar(num1, num2);
			break;
		case 4:
			if(num2 == 0)
			{
				printf("\nN�o � poss�vel dividir por 0!\n");
			}
			else 
			{
				resultado = dividir(num1, num2);
			}
			break;
		case 5: 
			resultado = CalcularPorcentagem(num1, num2);
			break;
		default:
			printf("\nOp��o inv�lida\n");
			break;		
	}
	printf("----------------------------------------\n");
	printf("Resultado: %.2f\n", resultado); // 'resultado' n�o tem '&' pois ele serve para armazenar um valor numa vari�vel
	printf("\n");
	system("pause");
	return 0;
}
