#include <stdio.h>

int main(void){
    /*Um site de compras coletivas realizará uma promoção para os 100 primeiros clientes que acessarem sua página.
    Ao entrar na página o cliente deverá informar a sua idade.
    O site quer saber a faixa etária dos clientes que acessarem a página nesse dia.
    Elabore um programa que leia a idade de 100 pessoas e no final informe quantidade de pessoas menores de idade 
    e a média das pessoas maiores de idade.*/
    
    int clientes[100];
    int i, idade;
    int menoresdeidade = 0;
    float media, maioresdeidade; 
    int contadoridade;
    
    for (i = 0; i < 100; i++){
        printf("Voce é a %d° pessoa a acessar a pagina, informe a sua idade. \nDigite aqui a sua idade: ", i + 1);
        scanf("%d", &clientes[i]);
    }
    for (i = 0; i < 100; i++){
        if (clientes[i] < 18){
            menoresdeidade++;
        }
        if (clientes[i] >= 18){
            maioresdeidade += clientes[i];
            contadoridade++;
        }
        media = maioresdeidade / contadoridade;
        printf("A quantidade de pessoas menores de idade é de %d. \nA média das pessoas maiores de idade é de: %f", menoresdeidade, media);
    }
}
