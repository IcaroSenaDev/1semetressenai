programa
{
	
	funcao inicio()
	{
		real n1,n2
		real som, mult, sub, div
		inteiro num
	
		escreva("Escolha um número \n")
		leia(n1)
		escreva("Escolha um outro número \n")
		leia(n2)
	
		som = (n1 + n2)
		mult = (n1 * n2)
		sub = (n1 - n2) 
		div = (n1 / n2)

		escreva("Digite um número:\n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão\n")
		leia(num)
		
		escolha(num){
			caso 1:
				escreva("A soma entre ",n1," + ",n2," é igual a: ",som)
			pare
			caso 2:
				escreva("A subitração entre ",n1," - ",n2," é igual a: ",sub)
			pare
			caso 3:
				escreva("A multiplicação entre ",n1," x ",n2," é igual a: ",mult)
			pare
			caso 4:
				escreva("A divisão entre ",n1," / ",n2, "é igual a: ", div)
		}
		
	}
}
