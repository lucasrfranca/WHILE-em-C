#include <stdio.h>
#include <stdlib.h>

/* Criar um programa na linguagem C que imprima os 
múltiplos de 2 e 4, ao mesmo tempo, no intervalo de 
100 a 200 */

main() {
	
	int i=100;
	
	while (i<200) {
		
		i+=4;
			
		printf ("%d ", i);
		
	}
	
}