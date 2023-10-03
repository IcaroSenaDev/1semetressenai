programa
{
	//Elabore um algoritmo que leia dois valores diferentes e mostre o maior multiplicado por 5 e o menor multiplicado por 10. 
	
	funcao inicio()
	{
		inteiro num1, num2
	
		escreva("Olá usuário \n Digite o primeiro número","\n")
		leia(num1)
		escreva("Digite o segundo número","\n")
		leia(num2)
		
		se(num1 > num2){
			escreva(num1," x 5 ",num1*5,"\n",num2," x 10 ",num2*10)
		}senao se(num2 > num1){
			escreva(num2," x 5 ",num2*5,"\n",num1," x 10 ",num1*10)
		}senao{
			escreva("Os valores são IGUAIS")
		}
	}
}
