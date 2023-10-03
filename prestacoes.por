programa
{
	
	funcao inicio()
	{
		real valor
		inteiro prest
		
		escreva("Olá Caro(a) consumidor(a)\n")
		escreva("Digite o valor do produto que você está comprando:\n")
		leia(valor)

		escreva("Digite quantas prestações você irá querer no seu produto:\n1 - 5 Prestações\n2- 10 Prestações\n3-12 Prestações\n4- 24 Prestações\n")
		leia(prest)

		escolha(prest){
			caso 1:
				escreva("Você terá que pagar 5 prestações de: ", valor/5)
			pare
			caso 2:
				escreva("Você terá que pagar 10 prestações de: ", valor/10)
			pare
			caso 3:
				escreva("Você terá que pagar 12 prestações de: ", valor/12)
			pare
			caso 4:
				escreva("Você terá que pagar 24 prestações de: ", valor/24)
		}
	}
}
