#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa na linguagem C que receba 15 
números e imprima quantos números maiores que 30 
foram digitados. */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i=1, quant=0;
	
	while (i<=15) {
		
		i++;
		
		printf ("Digite um número: ", i);
		scanf ("%d", &n);
		
		if (n>30) {
			
			quant++;
				
		}
		
	}
	
	printf ("\n");
	printf ("%d números são maiores que 30", quant);

}