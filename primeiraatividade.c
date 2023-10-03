#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	/*	Elabore um algoritmo que leia um valor e depois imprima na tela
	  	Elabore um algoritmo que leia 2 números inteiros e imprima a soma dos dois números
		  Elabore um algoritmo que leia 3 números inteiros e multiplique-os e imprima o resultado
		  Escreva um algoritmo que mostre a soma de dois valores
		  Escreva um algoritmo que calcule a média de 3 valores
		  Escreva um algoritmo que pegue um valor e mostre o seu sucessor
		  Escreva um algoritmo que pegue um valor e mostre ele multiplicado por 5
		  Escreva um algoritmo que pegue dois valores e mostra o primeiro dividido por 2 e o segundo multiplicado por 3*/
	
	int numescolha,num1,num2,num3,num4,num5,num6,num7,num8, num9,num10,num11,num12,num13,num14;
	
	printf ("Ola! Seja bem vindo(a) ao mais novo programa inteligente feito em linguagem C \nO que voce gostaria de ver? \n1- Visualizar valor informado \n2- Soma entre 2 numeros \n3- Multiplicacaoo entre 3 numeros \n4- Soma dos numeros informados \n5- Media dos numeros informados \n6- Sucessor do numero informado \n7- Multiplicacao por 5 \n8- Dividir o primeiro numero informado por 2 e multiplicar o segundo por 3 \nDigite aqui:");
	scanf("%d", &numescolha);
	
	switch(numescolha){
		case 1:
			printf("Você escolheu visualizar o valor informado !! \nQual numero deseja visualizar? \nDigite aqui: ");
			scanf("%d", &num1);
			
			printf("O numero informado é: %d",num1);
			
		break;
		case 2:
			printf("Você escolheu a soma de 2 numeros !! \nDigite abaixo o valor do primeiro numero. \nDigite aqui: ");
			scanf("%d",&num2);
			
			printf("Agora digite o valor do segundo numero. \nDigite aqui: ");
			scanf("%d",&num3);
			
			printf("O valor da soma entre %d + %d e igual a %d", num2, num3,num2+num3);
			
		break;
		case 3:
			printf("Você escolheu a multiplicacao entre 3 numeros !! \nDigite abaixo o valor do primeiro numero. \nDigite aqui: ");
			scanf("%d",&num4);
			
			printf("Agora digite o valor do segundo numero. \nDigite aqui: ");
			scanf("%d", &num5);
			
			printf("Agora digite o valor do terceiro numero. \nDigite aqui: ");
			scanf("%d",&num6);
			
			printf("O valor da multiplicacao entre %d x %d x %d e igual a: %d", num4,num5,num6,num4*num5*num6);
			
		break;
		case 4:
			printf("Voce escolheu a soma dos numeros informados !! \nDigite abaixo o valor do primeiro numero. \nDigite aqui: ");
			scanf("%d", &num7);
			
			printf("Agora digite o valor do segundo numero. \nDigite aqui: ");
			scanf("%d", &num8);
			
			printf("A soma entre os numeros %d + %d e igual a: %d", num7,num8,num7+num8);
			
		break;
		case 5:
			printf("Voce escolheu a media entre 3 numeros a sua escolha !! \nDigite abaixo o valor do primeiro numero. \nDigite aqui: ");
			scanf("%d", &num9);
			
			printf("Agora digite o valor do segundo numero. \nDigite aqui: ");
			scanf("%d", &num10);
			
			printf("Agora digite o valor do terceiro numero. \nDigite aqui: ");
			scanf("%d", &num11);
			
			printf("A media entre os numeros %d, %d e %d e igual a: %d",num9,num10,num11,(num9+num10+num11)/3);
			
		break;
		case 6:
			printf("Voce escolheu a multiplicacao por 5 !! \nDigite abaixo o valor que voce deseja multiplicar. \nDigite aqui: ");
			scanf("%d",&num12);
			
			printf("O valor de %d x 5 e igual a: %d", num12,num12*5);
			
		break;
		case 7:
			printf("Voce escolheu a divisao entre o primeiro numero informado por 2 e multiplicar o segundo numero informado por 3 \nDigite abaixo o valor do primeiro numero. \nDigite aqui: ");
			scanf("%d",&num13);
			
			printf("Agora digite o valor do segundo numero. \nDigite aqui: ");
			scanf("%d", &num14);
			
			printf("O valor do numero %d / 2 e igual a: %d \nO valor do numero %d x 3 e igual a: %d",num13,num13/2,num14,num14*3);
		break;
	}
	
}
