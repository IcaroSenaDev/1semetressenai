programa
{
	//Elabore um algoritmo que leia dois valores inteiros diferentes e diga quem é o maior.
	
	funcao inicio()
	{
		inteiro num1, num2
		
		escreva("Olá usuário \n Digite o primeiro número \n")
		leia(num1)
		escreva("Digite o segundo número \n")
		leia(num2)

		se(num1 > num2){
			escreva("O número ",num1," é  maior que o número ",num2)
				}senao se(num1 < num2){
					escreva("O número ",num2," é maior que o número ",num1)
				}
		
	}
}
