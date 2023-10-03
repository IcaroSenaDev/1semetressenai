#include <stdio.h>

int main()
{
    int l, c, op, cont = 0, valor;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);
    
    int matriz[l][c], i, j;
    
    for ( i = 0; i < l ; i++){
        for(j = 0; j < c ; j++){
            printf("Digite o valor da posição [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    do{
        printf("=========Menu========= \n1:Listar Valores\n2:Listar Pares\n3:Listar impares\n4: Multiplos de 10\n5: Listar Primos\n0: Sair\n");
        scanf("%d",&op)
        
        switch(op){
            case 1:
                printf("LISTA COMPLETA \n");
                for ( i = 0; i < l ; i++){
                 for(j = 0; j < c ; j++){
                    printf("Posição [%d][%d] = %d", i, j, matriz[i][j]);
            }
            printf("\n")
        }
        break
            case 2: 
                printf("LISTA PARES \n")
                 for ( i = 0; i < l ; i++){
                    for(j = 0; j < c ; j++){
                        if (matriz[i][j]%2 == 0){
                            printf("Posição [%d][%d] = %d", i, j, matriz[i][j]);
                        }
                }
            printf("\n")
        }
        break    
        case 3: 
                printf("LISTA IMPARES \n")
                 for ( i = 0; i < l ; i++){
                    for(j = 0; j < c ; j++){
                        if (matriz[i][j]%2 != 0){
                            printf("Posição [%d][%d] = %d", i, j, matriz[i][j]);
                        }
                }
            printf("\n")
        }
        break    
        case 4: 
                printf("LISTA MULTIPLOS DE 10 \n")
                 for ( i = 0; i < l ; i++){
                    for(j = 0; j < c ; j++){
                        if (matriz[i][j]%10 == 0){
                            printf("Posição [%d][%d] = %d", i, j, matriz[i][j]);
                        }
                }
            printf("\n")
        }
        break 5: 
                printf("LISTA PRIMOS \n")
                 for ( i = 0; i < l ; i++){
                    for(j = 0; j < c ; j++){-*
                        valor = matriz[i][j];
                        while(valor != 0 || cont == 3){
                            if (matriz[i][j] % valor == 0){
                               cont++;
                            }
                                valor--;
                        }
                        if (cont  == 2 ){
                            printf("%d e primo \n", matriz[i][j]);
                        }
                        cont = 0
                }
            printf("\n")
        }
        break    
    }while (op != 0)
}
