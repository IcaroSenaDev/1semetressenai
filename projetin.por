programa 
{
	funcao inicio()
	{
		inteiro num,soma,sub 
		real mult,div, n1, n2
		inteiro numc,numcl,numytb
		
		escreva("Seja Bem vindo ao mais novo servidor prime\n")
		escreva("O que você gostaria de fazer?\n1- Calculadora Inteligente\n2- Que mês estamos\n3- Youtubers Famosos de Programação\n4- Meu Github\n5- Meu Linkendin\nDigite aqui: ")
		leia(num)
		
		escolha(num){
			caso 1:
			   escreva("Seja bem vindo(a) a Calculadora Inteligente\n")
			   
			   escreva("Digite o primeiro número: \n")
			   leia(n1)
			   escreva("Digite o segundo número: \n")
			   leia(n2)
			   
			   escreva("Digite o número correspondente a operação que você deseja: \n1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\nDigite aqui: ")
			   leia(numc)
			   
			   escolha(numc){
			       caso 1:
				     escreva("O valor de ",n1," + ",n2," é igual a: ",n1+n2)
				   pare
				   caso 2:
				     escreva("O valor de ",n1," - ",n2," é igual a: ",n1-n2)
				   pare 
				   caso 3:
				     escreva("O valor de ",n1," x ",n2," é igual a: ",n1*n2)
				   pare
				   caso 4:
				     escreva("O valor de ",n1," ÷ ",n2," é igual a: ",n1/n2)
				   pare
			   }
			  pare
			caso 2:
			    escreva("Seja Bem vindo(a) ao nosso calendário \n")
				escreva("Qual o número do mês que você deseja saber?\nDigite aqui: ")
				leia(numcl)
				
				escolha(numcl){
					caso 1:
					  escreva("JANEIRO")
					pare
					caso 2: 
					  escreva("FEVEREIRO")
					pare
					caso 3: 
					  escreva("MARÇO")
					pare
					caso 4: 
					  escreva("ABRIL")
					pare 
					caso 5:
					  escreva("MAIO")
					caso 6:
					  escreva("JUNHO")
					pare
					caso 7:
					  escreva("JULHO")
					pare
					caso 8:
					  escreva("AGOSTO")
					pare
					caso 9:
					  escreva("SETEMBRO")
					pare
					caso 10:
					  escreva("OUTUBRO")
					pare
					caso 11:
					  escreva("NOVEMBRO")
					pare
					caso 12:
					  escreva("DEZEMBRO")
	                pare
				}
		    pare 
			caso 3:
			 escreva("Qual desses youtubers você gostaria de conhecer?\n1° Micael Mota\n2° Gustavo Guanabara\n3° Filipe Deschamps\nDigite aqui: ")
			 leia(numytb)
			 
			 	escolha(numytb){
			 		caso 1:
			 			escreva("Acesse já o canal do MICAEL MOTA pelo link: https://www.youtube.com/@devmicaelomota")
			 		pare
			 		caso 2:
			 			escreva("Acesse já o canal do GUSTAVO GUANABARA pelo link: https://www.youtube.com/@CursoemVideo")
			 		pare
			 		caso 3:
			 			escreva("Acesse já o canal do FILIPE DESCHAMPS pelo link: https://www.youtube.com/@FilipeDeschamps")
			 		pare
			 	}
			pare
			caso 4:
				escreva("Acesse meu github e veja todos os meus trabalhos e atividades escolares: https://github.com/IcaroSenaDev")
			pare
			caso 5:
				escreva("Veja meu perfil profissional e todas as publicações que eu faço pelo LinkendIn: https://www.linkedin.com/in/icaro-bonfim-de-sena-66b48a25b/")
			pare
		}
	}

}
