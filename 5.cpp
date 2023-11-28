/*
05-Gerar 100 números aleatórios e armazená-los em um vetor. Exibir o vetor.
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

main(){
	
	int indice, vetor[100];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n MOSTRAR UM VETOR DE 100 NÚMEROS ALEATÓRIOS:");
		printf("\n\n *********************************************************************** \n");
	
	printf("\n RESULTADO: \n");
		printf("\n ----------------------------------------------------------------------- \n");
			printf("\n Os 100 números aleatórios do vetor gerado são: \n\n");
			
	for(indice=0; indice<100; indice++){
		
	vetor[indice] = rand() % 100;
		
		printf("\n %d \n", vetor[indice]);
		
}

	printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
		
}
