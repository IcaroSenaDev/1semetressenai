programa
{
	
//Elabore um algoritmo que leia um valor diferente de 50 e diga se ele é maior ou menor  50.
	
	funcao inicio()
	{
		real num
		
		escreva("Olá usuário, digite um número:\n")
		leia(num)

			se(num>50){
				escreva("O número ",num," é maior que 50")
			}senao se(num<50){
				escreva("O número ",num," é menor que 50")
			}senao{
				escreva("O número ",num," é igual a 50")
		}
	}
}
