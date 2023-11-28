/*
01- Fazer um programa para percorrer uma matriz de tamanho 4x4 e some os elementos da
diagonal principal e diagonal secundária em duas variáveis diferentes.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int coluna, linha;
		float matriz[4][4], soma_dp, soma_ds;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n SOMAR OS ELEMENTOS DAS DIAGONAIS DE UMA MATRIZ 4x4:");
		printf("\n\n *********************************************************************** \n");
	
	for(linha=0;linha<4;linha++)
	for(coluna=0;coluna<4;coluna++){
	
	printf("\n Digite o número da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &matriz[linha][coluna]);
	
	if(linha!=3 || coluna!=3){
		printf(" ----------------------------------------------------------------------- ");
}

	if(linha==coluna){
		
	soma_dp = soma_dp + matriz[linha][coluna];
}

	if(linha==4-1-coluna){
		
	soma_ds = soma_ds + matriz[linha][coluna];
}
}
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n\n");
			printf(" - A soma dos elementos da diagonal principal é: %.3f;\n", soma_dp);
				printf(" - A soma dos elementos da diagonal secundária é: %.3f.", soma_ds);

	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
			
}
