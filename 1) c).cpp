/*
c) Uma agência de turismo quer fazer um levantamento das praias da cidade para uma programação
turística de verão, sabendo-se que cada praia tem um nome e uma distância (em km) do hotel. Criar
um algoritmo que forneça os seguintes dados:

- A porcentagem de turistas nas praias próprias do hotel;
- A praia mais distante;
- Nome e distância das praias não-próprias com distância do hotel maior que 10km.

O algoritmo acaba quando se digita "@" para o nome da praia.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	
	int contador=1, turistas, maior_distancia=0;
		float distancia, porcentagem_turistas, acumulador_turistas=0, acumulador_proprias=0;
			char nome_praia[30], classificacao, nome_mais_distante[30], nome_em_char;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n LEVANTAMENTO DAS PRAIAS: ");
		printf("\n \n *********************************************************************** \n");
	
	do{
	
	printf("\n DADOS DA PRAIA %d:", contador);
		printf(" \n ----------------------------------------------------------------------- ");
	
	if(contador==1){
		
	printf("\n Digite o nome da praia: ");
		scanf("%s", &nome_praia);
}

	else{
	
	printf("\n Digite o nome da praia (digite \"@\" sem as aspas para terminar a pesquisa): ");
		scanf("%s", &nome_praia);
}
	
	if(!strcmp(nome_praia,"@")){
	
	nome_em_char = '@';
}

	else{

	printf(" ----------------------------------------------------------------------- ");
		printf("\n Essa praia fica a que distância (em km) do hotel? ");
			scanf("%f",&distancia);
				printf(" ----------------------------------------------------------------------- ");
	
	printf("\n Digite \"P\" se a praia for própria do hotel ou \"N\" para não-própria (sem as aspas): ");
		scanf(" %c",&classificacao);
	
	if(classificacao!='P' && classificacao!='N'){
		
	printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ");
		printf("\n ERRO: Digite apenas \"P\" ou \"N\" sem as aspas! Essa praia foi desconsiderada! Tente novamente!");
			printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n \n");
}
	
	else{
		
	printf(" ----------------------------------------------------------------------- ");
		printf("\n Digite o número de turistas nessa praia: ");
			scanf("%d",&turistas);
				printf(" *********************************************************************** \n");
	
	if(classificacao=='P'){
		
	acumulador_proprias = acumulador_proprias + turistas;
}
	
	if(distancia>maior_distancia){
		
	maior_distancia = distancia;
	
	strcpy(nome_mais_distante, nome_praia);
}

	if(distancia>10 && classificacao=='N'){
		
	printf("\n RESULTADO INDIVIDUAL: \n");
		printf("\n Nome: %s; \n Distância: %.3fkm. \n Essa praia é não-própria com distância do hotel maior que 10km.", nome_praia, distancia);
			printf(" \n \n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
}

	contador++;
	
	acumulador_turistas = acumulador_turistas + turistas;
}
}
	
	}while (nome_em_char != '@');

	porcentagem_turistas = 100 * acumulador_proprias / acumulador_turistas;

	printf("\n *********************************************************************** ");
		printf("\n *********************************************************************** ");
			printf("\n \n RESULTADO GERAL: \n");
				printf("\n A porcentagem de turistas nas praias próprias do hotel é de: %.3f%%.", porcentagem_turistas);
					printf("\n A praia mais distante é a: %s.", nome_mais_distante);

	printf("\n \n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
}
