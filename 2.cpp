/*
02- Fazer um programa para ler uma matriz de tamanho M1xM2 (pode ser escolhido pelo usuário),
e multiplicar a matriz por uma constante, ao final imprimir o valor da matriz resultante.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int coluna, linha, M1=5, M2=5;
		float matriz[M1][M2], matriz_r[M1][M2];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n MULTIPLICAR UMA MATRIZ POR UMA CONSTANTE (ESCOLHI 13):");
		printf("\n\n *********************************************************************** \n");
	
	printf("\n Digite o número de LINHAS que você quer que a matriz tenha: ");
		scanf("%d", &M1);
		
	printf(" ----------------------------------------------------------------------- ");
	
	printf("\n Digite o número de COLUNAS que você quer que a matriz tenha: ");
		scanf("%d", &M2);
	
	printf("\n *********************************************************************** \n");
	
	for(linha=0;linha<M1;linha++)
	for(coluna=0;coluna<M2;coluna++){
	
	printf("\n Digite o número da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &matriz[linha][coluna]);
	
	if(linha!=M1-1 || coluna!=M2-1){
		printf(" ----------------------------------------------------------------------- ");
}

	matriz_r[linha][coluna] = matriz[linha][coluna] * 13;
}

	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n\n");
			printf(" A matriz resultante (multiplicação da matriz que você digitou por 13) é:\n\n\n");
			
	for(linha=0;linha<M1;linha++)
	for(coluna=0;coluna<M2;coluna++){
	
	if(coluna!=0){
		printf("        ");
}

	if(coluna==0 && linha!=0 && linha!=M1){
		printf("\n\n\n\n");
}

	printf(" %.3f", matriz_r[linha][coluna]);
}

	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
			
}
