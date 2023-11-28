/*
05- Criar um algoritmo que leia e armazene os elementos de uma matriz inteira M(10,10) e
imprimi-la. Troque, a seguir:
- A segunda linha pela oitava linha;
- A quarta coluna pela décima coluna;
- A diagonal principal pela diagonal secundária.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	char codigo, contador_ds=0;
		int coluna, linha;
			float M[10][10], vetor_ds[10];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n TROCAR ALGUMAS LINHAS E COLUNAS DE UMA MATRIZ DE ORDEM 10:");
		printf("\n\n *********************************************************************** \n");
	
	for(linha=0;linha<10;linha++)
	for(coluna=0;coluna<10;coluna++){
	
	printf("\n Digite o número da linha %d e coluna %d da matriz: ", linha+1, coluna+1);
		scanf("%f", &M[linha][coluna]);
	
	if(linha!=9 || coluna!=9){
		printf(" ----------------------------------------------------------------------- ");
}
}
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n\n");
			printf(" - A matriz que você digitou é essa: \n\n\n");
		
	for(linha=0;linha<10;linha++)
	for(coluna=0;coluna<10;coluna++){
	
	if(coluna!=0){
		printf("    ");
}

	if(coluna==0 && linha!=0 && linha!=10){
		printf("\n\n\n");
}

	printf(" %.3f", M[linha][coluna]);
}
	
	printf("\n\n *********************************************************************** \n");
		printf("\n Digite 'T' (sem as aspas) no campo indicado abaixo para trocar, na matriz acima: \n");
			printf("\n - A segunda linha pela oitava linha;");
				printf("\n - A quarta coluna pela décima coluna;");
					printf("\n - E a diagonal principal pela diagonal secundária.");
		
	printf("\n\n DIGITE AQUI: ");
		scanf(" %c", &codigo);
	
	if(codigo=='T'){
		
	system("cls");
	
	printf("\n TROCAR ALGUMAS LINHAS E COLUNAS DE UMA MATRIZ DE ORDEM 10:");
		printf("\n\n *********************************************************************** \n");
	
	for(linha=0;linha<10;linha++)
	for(coluna=0;coluna<10;coluna++){
		
	if(linha == 10 - 1 - coluna){
	
	vetor_ds[contador_ds] = M[linha][coluna];
	contador_ds++;
}
}

	contador_ds=0;
	
	for(linha=0;linha<10;linha++)
	for(coluna=0;coluna<10;coluna++){
	
	if(linha==1){
	
	M[linha][coluna] = M[7][coluna];
}
	
	if(coluna==3){
	
	M[linha][coluna] = M[linha][9];
}

	if(linha==coluna){
	
	M[linha][coluna] = vetor_ds[contador_ds];
	
	contador_ds++;
}
}

	printf("\n RESULTADO: \n\n");
		printf(" - A matriz fica assim após as trocas: \n\n\n");
		
	for(linha=0;linha<10;linha++)
	for(coluna=0;coluna<10;coluna++){
	
	if(coluna!=0){
		printf("    ");
}

	if(coluna==0 && linha!=0 && linha!=10){
		printf("\n\n\n");
}

	printf(" %.3f", M[linha][coluna]);
}
		
	printf("\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
}

}
