programa
{
	
	funcao inicio()
	{
		 cadeia nome
		 real nota1, nota2, nota3, nota4, media
		 
		escreva("Digite o nome do aluno: ")
			leia(nome)
		escreva(" Digite a nota da primeira unidade do aluno: \n")
			leia(nota1)
		escreva("Digite a nota da segunda unidade do aluno: \n")
			leia(nota2)
		escreva("Digite a nota da terceira unidade do aluno: \n")
			leia(nota3)
		escreva("Digite a nota da quarta unidade do aluno: \n")
			leia(nota4)

		media = (nota1 + nota2 + nota3 + nota4)/4

		escreva("A média do aluno ",nome," é igual a: ",media, "\n")

			

	}
}
