programa
{
	//Elabore um algoritmo que leia dois valores inteiros diferentes e mostre-os na tela em ordem decrescente.
	
	funcao inicio()
	{
		inteiro num1, num2
		
		escreva("Olá usuário \n Digite o primeiro número \n")
		leia(num1)
		escreva("Digite o segundo número \n")
		leia(num2)

		se(num1 > num2){
			escreva("1° ",num1,"\n 2° ",num2)
						}senao se(num1 < num2){
					escreva("1° ",num2,"\n 2° ",num1)
						}senao{
							escreva("Ambos os números são IGUAIS")
						}
	}
}
