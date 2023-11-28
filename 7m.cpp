/*
07- Elabore um algoritmo que leia uma matriz 4x4 e indique se ela é uma matriz triangular superior. Matriz
triangular superior é uma matriz quadrada onde todos os elementos abaixo da diagonal principal são nulos
(com valor zero).
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int coluna, linha, contador=0;
		float matriz[4][4];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n LER UMA MATRIZ 4x4 E MOSTRAR SE ELA É TRIANGULAR SUPERIOR:");
		printf("\n\n *********************************************************************** \n");
	
	for(linha=0;linha<4;linha++)
	for(coluna=0;coluna<4;coluna++){
	
	printf("\n Digite o número da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &matriz[linha][coluna]);
	
	if(linha!=3 || coluna!=3){
		printf(" ----------------------------------------------------------------------- ");
}
	
	if(linha>coluna && matriz[linha][coluna]==0){
	
	contador++;
}
}
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n\n");
	
	if(contador==6){
		printf("\n A matriz é triangular superior.");
}

	else{
		printf("\n A matriz NÃO é triangular superior.");
}

	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
			
}
