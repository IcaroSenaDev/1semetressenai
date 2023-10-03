#include <stdio.h>

int main(void){
    
    int numeros[50];
    int i, soma;
    int contador = 0;
    float media;
    
   for (i = 0; i < 50; i++){
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);
   }
   for (i = 0; i < 50; i++){
       if (numeros[i] >= 10 && numeros[i] <= 150){
           soma += numeros[i];
           contador++;
       }
   }
    if (contador > 0){
        media = (float)soma / contador;
        printf("A media dos numeros apresentados é de: %.2f", media);
    }else{
        printf("Nenhum valor nos intervalos de 10 a 150");
    }
    
}
