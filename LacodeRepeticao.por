programa
{
	
	funcao inicio()
	{
		inteiro i = 10

		escreva("----- Laço ENQUANTO -----\n")
		enquanto(i >= 0){
			escreva(i,"\n")
			i--
		}

		escreva("\n----- Laço FAÇA-ENQUANTO -----\n")
		i = 10
		 
		faca{
			escreva(i,"\n")
			i--
		} enquanto(i >= 0)

		escreva("\n----- Laço PARA -----\n")
		 
		para(i = 10; i >= 0; i--){
			escreva(i,"\n")
		}
		
	}
}
