/*
e) Escrever um programa para ler um valor inteiro positivo N e calcular

Somatório = 1^2 + 2^2 + ... + N^2

Após, desenvolva um fluxograma do referido programa.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){
	
	int N, i, quadrado, somatorio=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n CALCULAR A SOMA DE UMA SEQUÊNCIA DE NÚMEROS AO QUADRADO:");
		printf("\n\n *********************************************************************** \n");
	
	printf("\n Com esse programa podemos calcular: somatório = 1^2 + 2^2 + ... + N^2. \n");
		printf("\n ----------------------------------------------------------------------- \n");
		
	printf("\n Digite a quantidade (N) de números da sequência: ");
		scanf("%d", &N);
			printf("\n *********************************************************************** \n");
		
	for(i=1; i<=N; i++){
		
	quadrado = pow(i,2);
	
	somatorio = somatorio + quadrado;
}

	printf("\n RESULTADO: \n");
		printf(" O resultado do cálculo do somatório é: %d.", somatorio);
			printf("\n\n *********************************************************************** \n");
		
	printf("\n FIM DO PROGRAMA. \n");
		printf("\n *********************************************************************** \n");
				
}
