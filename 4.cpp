/*
04- Dada uma matriz A(7,7), retorne o menor valor dos elementos abaixo e acima da diagonal
secundária.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int coluna, linha;
		float A[7][7], menor_abaixo, menor_acima;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n MOSTRAR O MENOR ELEMENTO ABAIXO E ACIMA DA DIAGONAL SECUNDÁRIA DE UMA MATRIZ:");
		printf("\n\n *********************************************************************** \n");
	
	for(linha=0;linha<7;linha++)
	for(coluna=0;coluna<7;coluna++){
	
	printf("\n Digite o número da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &A[linha][coluna]);
	
	if(linha!=6 || coluna!=6){
		printf(" ----------------------------------------------------------------------- ");
}

	if((linha+1+coluna+1>=7+2 && A[linha][coluna]<menor_abaixo) || linha==1 && coluna==6){
	
	menor_abaixo = A[linha][coluna];
}
	
	if((linha+1+coluna+1<=7 && A[linha][coluna]<menor_acima) || linha==0 && coluna==0){
	
	menor_acima = A[linha][coluna];
}
}
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n\n");
			printf(" - O menor valor dos elementos ABAIXO da diagonal secundária é: %.3f;\n\n", menor_abaixo);
				printf(" - O menor valor dos elementos ACIMA da diagonal secundária é: %.3f.\n", menor_acima);

	printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
			
}
