#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	/* Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados:
	 idade e quantidade de livros que leu no ano de 2016. 
	Faça um programa que leia os dados de 100 pessoas, calcule e imprima:
	a) A quantidade de pessoas que leram 5 livros ou mais.
	b) A média de idade das pessoas que leram menos que 5 livros.
	c) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.*/

	int idade, livroslidos;
	int totallivros = 0, totalidade = 0;
	int maisde5 = 0;
	int menosde5 = 0;
	int i = 0;
	

		for(int i = 0; i < 100; i++){
		printf("Digite a idade da %d pessoa? \nDigite aqui: ", i + 1);
		scanf("%d", &idade);
		printf("Agora informe quantos livros a %d pessoa leu em 2016. \nDigite aqui: ", i + 1);
		scanf("%d", &livroslidos);
		
		if (livroslidos >= 5){
				maisde5++;
		}else if(idade < 10){
			totallivros += livroslidos;
		}else if( totallivros < 5){
			totalidade += idade;
			menosde5++;	
		}
	}
	
		printf("A quantidade de pessoas que leram 5 livros ou mais: %d\n", maisde5);
			printf("A média de idade das pessoas que leram menos que 5 livros: %.2f\n", totalidade / menosde5);
    			printf(" A quantidade total de livros lidos pelos entrevistados menores de 10 anos: %d\n", totallivros);
	
	return 0;
}


