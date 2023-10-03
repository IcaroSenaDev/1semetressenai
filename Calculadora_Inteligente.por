programa 
{
	
	funcao inicio()
	{	
		inteiro num1, num2, soma, sub
		real mult, div
		
		escreva ("Digite o primeiro numero: ")
		leia (num1)
		escreva ("Digite o segundo numero: ")
		leia (num2)

		soma = num1 + num2
		sub = num1 - num2
		mult = num1 * num2
		div = num1 / num2

		escreva("A soma dos números, ", num1, " e ", num2, " é igual a: \n", soma,"\n")
		
		escreva("A subtração dos números,", num1, " e ", num2, " é igual a: \n", sub,"\n")
		
		escreva("A multiplicação dos números,", num1, " e ", num2, " é igual a: \n", mult,"\n")
		
		escreva("A Divisão dos números,", num1, " e ", num2, " é igual a: \n",div,"\n")
		
		
	}
}
