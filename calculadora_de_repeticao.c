#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer um programa na linguagem C que recebe um 
símbolo de operação do usuário (+, -, * ou /) e dois 
números reais. O programa deve retornar o resultado 
da operação recebida sobre estes dois números. 
Somente deverá encerrar quando for colocado o 
símbolo “?” */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	char op;
	
	while (op!='?') {
		
		printf ("Digite o 1º número: ");
	    scanf ("%f", &n1);
	
	    printf ("Digite o 2º número: ");
	    scanf ("%f", &n2);
	    printf ("\n");
	    
	    printf ("[+] = Soma\n");
	    printf ("[-] = Subtração\n");
	    printf ("[*] = Multiplicação\n");
	    printf ("[/] = Divisão\n\n");
	    
	    fflush (stdin);
	    printf ("Digite o símbolo da operação a ser realizada: ");
	    scanf ("%c", &op);
	    printf ("\n");
	    
	    switch (op) {
	    	
	    	case '+': printf ("Resultado: %.2f", n1+n2); break;
	    	case '-': printf ("Resultado: %.2f", n1-n2); break;
	    	case '*': printf ("Resultado: %.2f", n1*n2); break;
	    	case '/': printf ("Resultado: %.2f", n1/n2); break;
	    	default: printf ("Opção inválida");
		}
		
	    printf ("\n");
	    printf ("--------------------------------------------------------------\n\n");
	    
	}
	
}