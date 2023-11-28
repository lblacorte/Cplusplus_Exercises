/*
06- Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int contador=0, coluna, linha, validar=0, vetor_linhas[400], vetor_colunas[400], delimitador;
		float matriz[20][20], X;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n LOCALIZAR UM VALOR X EM UMA MATRIZ 20x20:");
		printf("\n\n *********************************************************************** \n");
	
	for(linha=0;linha<20;linha++)
	for(coluna=0;coluna<20;coluna++){
	
	printf("\n Digite o número da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &matriz[linha][coluna]);
	
	if(linha!=19 || coluna!=19){
		printf(" ----------------------------------------------------------------------- ");
}
}

	printf("\n\n *********************************************************************** \n");
	
	printf("\n Digite o valor X que será procurado na matriz: ");
		scanf("%f", &X);
	
	for(linha=0;linha<20;linha++)
	for(coluna=0;coluna<20;coluna++){
	
	if(matriz[linha][coluna]==X){
	
	validar = 1;
	
	vetor_linhas[contador] = linha + 1;
	
	vetor_colunas[contador] = coluna + 1;
	
	contador++;
}
}

	delimitador = contador;
	
	printf("\n *********************************************************************** \n");
		printf("\n\n RESULTADO: \n\n");
	
	if(validar!=0){
		printf("\n O valor X foi localizado: \n\n");
	
	for(contador=0;contador<delimitador;contador++){
		
	printf("\n - Na linha %d e coluna %d", vetor_linhas[contador], vetor_colunas[contador]);
	
	if(contador!=delimitador-1){
		printf(";");
}

	else{
		printf(".");
}
}
}
	
	else{
		printf("\n O valor X NÃO foi encontrado. ");
}

	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
			
}
