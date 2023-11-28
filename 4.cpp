/*
04- Leia um vetor de 40 posições e acumule os valores do primeiro elemento no segundo,
deste no terceiro e assim por diante. Ao final, escreva o vetor obtido.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int contador=1, indice;
	float vetor[40], acumulador=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n ACUMULAR OS VALORES DE UM VETOR DO ÍNDICE ANTERIOR NO NOVO ÍNDICE E MOSTRAR O NOVO VETOR: ");
		printf("\n\n *********************************************************************** \n");
		
	for(indice=0; indice<40; indice++){
		
		printf("\n Digite o %dº número: ", contador);
			scanf("%f", &vetor[indice]);
	
	acumulador = acumulador + vetor[indice];
	
	vetor[indice] = acumulador;
	
	if(indice<39){
		
		printf(" ----------------------------------------------------------------------- ");
}

contador++;

}

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n ----------------------------------------------------------------------- \n");
				printf("\n O vetor obtido (com o valor do primeiro elemento acumulado no segundo e assim por diante) é (com 5 casas decimais): \n\n");
				
	for(indice=1, contador=1; indice<40; indice++, contador++){
		
		printf("\n %.5f (o %dº + o %dº números digitados)\n", vetor[indice], contador, contador+1);

}

	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
		
}
