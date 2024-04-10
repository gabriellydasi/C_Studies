/*
Aula 7.2
Funções com passagem de parâmetros e retorno 
Calculadora
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FUNÇÕES DA CALCULADORA
float somar(float num1, float num2){ // parâmetros
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
	printf("Digite o valor do primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o valor do segundo número: ");
	scanf("%f", &num2);
	printf("----------------------------------------\n");
	printf("1. SOMAR\n");
	printf("2. SUBTRAIR\n");
	printf("3. MULTIPLICAR\n");
	printf("4. DIVIDIR\n");
	printf("5. PORCENTAGEM\n");
	printf("\n");
	printf("Escolha a opção desejada: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			resultado = somar(num1, num2); // o nome dos parâmetros precisam ser iguais ao que está na função
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
				printf("\nNão é possível dividir por 0!\n");
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
			printf("\nOpção inválida\n");
			break;		
	}
	printf("----------------------------------------\n");
	printf("Resultado: %.2f\n", resultado); // 'resultado' não tem '&' pois ele serve para armazenar um valor numa variável
	printf("\n");
	system("pause");
	return 0;
}
