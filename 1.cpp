/*
01- Escrever um algoritmo para ler cinco valores inteiros, calcular a sua média, e escrever na
tela os números que são superiores à média.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int contador=1, vetor[5], maiores=0, media, indice, acumulador=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n MOSTRAR OS NÚMEROS SUPERIORES À MEDIA DE UM VETOR DE 5 NÚMEROS INTEIROS:");
		printf("\n\n *********************************************************************** \n");
		
	for(indice=0; indice<5; indice++){
		
		printf("\n Digite o %dº número: ", contador, indice);
			scanf("%d", &vetor[indice]);
			
	if(indice<4){
		
		printf(" ----------------------------------------------------------------------- ");
}
			
	acumulador = acumulador + vetor[indice];

contador++;

}

	media = acumulador / indice;
	
	for(indice=0; indice<5; indice++){
		
	if(vetor[indice] > media){
	
	vetor[maiores] = vetor[indice];	
}

maiores++;

}

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n ----------------------------------------------------------------------- \n");
				printf("\n Os números que são superiores à média são: \n\n");
	
	maiores = 0;
	
	for(indice=0; indice<5; indice++){
	
	if(vetor[indice] > media){
	
		printf("\n %d (%dº número digitado)\n", vetor[maiores], maiores+1);
}

	maiores++;
	
}

	printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
		
}
