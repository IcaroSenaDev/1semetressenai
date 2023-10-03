#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int num1 = 0, num2 = 1, num3, i;
	
	
	for ( i = 0; i < 20; ++i){
			
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
			
			
			printf("%d \n", num3);
		}

	return 0;
}
	 
