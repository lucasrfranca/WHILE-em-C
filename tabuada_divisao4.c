#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que exiba a tabuada de 
divisão do número 4 */

main() {
	
	int i=0, n=4, res;
	
	while (res<10) {
		
		i+=4;
		res=i/n;
			
		printf ("%d / %d = %d\n", i, n, res);
		
	}
	
}