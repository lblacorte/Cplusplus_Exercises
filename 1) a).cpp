/*
1) a) Criar um algoritmo que leia um número (num) da entrada. Em seguida, ler n números da entrada e
imprimir o triplo de cada um.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int num, contador;
		float numero, triplo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n CALCULAR O TRIPLO DE VÁRIOS NÚMEROS:");
		printf("\n\n *********************************************************************** \n");
		
	printf("\n Você quer saber o triplo de quantos números? ");
		scanf("%d", &num);
			printf("\n *********************************************************************** \n");
		
	for(contador=0; contador<num; contador++){
		
		printf("\n Digite um número: ");
			scanf("%f", &numero);
				printf(" ----------------------------------------------------------------------- ");
		
		triplo = numero * 3;
		
		printf("\n RESULTADO: \n");
			printf(" O triplo desse número é: %.3f.", triplo);
				printf("\n\n *********************************************************************** \n");
				
}

		printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
			printf("\n FIM DO PROGRAMA. \n");
				printf("\n *********************************************************************** \n");
				
}
