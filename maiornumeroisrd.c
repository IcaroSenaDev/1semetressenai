#include <stdio.h>

int main() {
    
	int num, maior = 0;
    
    while (1) {
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        if (num > maior) {
            maior = num;
        }
    }
    
    printf("O maior numero inserido foi: %d\n", maior);
    
    return 0;
}
