programa
{
	
//Elabore um algoritmo que leia um valor diferente de 0 e diga se ele é positivo ou negativo

		funcao inicio()
	{
		inteiro num
		
		escreva("Olá usuário \n Digite um número \n")
		leia(num)

		se(num>0){
			escreva(num," é um número POSITIVO")
				}senao se(num<0){
					escreva(num," é um número NEGATIVO")
						}senao{
							escreva(num," é um número NEUTRO")
						}
	}
}
