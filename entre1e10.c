#include <stdio.h>

int main() {
    int num;
    
		while (1){
       	 printf("Digite um numero entre 1 e 10: ");
        	scanf("%d", &num);
        if (num < 1 || num > 10) {
            printf("Numero errado lerdao, falei de 1 a 10. Encerrando o programa.\n");
            break;
        }
        
    }
    return 0;
}
