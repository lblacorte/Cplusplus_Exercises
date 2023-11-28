/*
Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo.
Para cada consumidor, são digitados os seguintes dados:
- número do consumidor
- quantidade de KW/h consumidos durante o mês
- tipo (código) do consumidor

1- residencial, preço em reais por KWh = 0,3
2- comercial, preço em reais por KWh =0,5
3- industrial, preço em reais por KWh = 0,7

Os dados devem ser lidos até que seja encontrado um consumidor com número 0 (zero). Calcular e
imprimir:

- o custo total para cada consumidor
- o total de consumo para os três tipos de consumidor
- a média de consumo dos tipos 1 e 2
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	
	int contador=1, numero_consumidor, codigo_consumidor;
		float quantidade_kwh, custo_total, acumulador_1=0, acumulador_2=0, acumulador_3=0, media_1e2, media_1, media_2, contador_1, contador_2, acumulador_consumo=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n LEITURA MENSAL DOS MEDIADORES DE CONSUMO: ");
		printf("\n \n *********************************************************************** \n");
	
	do{
	
	printf("\n DADOS DO CONSUMIDOR %d:", contador);
		printf(" \n ----------------------------------------------------------------------- ");
	
	if(contador==1){
		
	printf("\n Digite o número do consumidor: ");
		scanf("%d", &numero_consumidor);
}

	else{
	
	printf("\n Digite o número do consumidor (digite \"0\" sem as aspas para encerrar a pesquisa): ");
		scanf("%d", &numero_consumidor);
}
	
	if(numero_consumidor!=0){

	printf(" ----------------------------------------------------------------------- ");
		printf("\n Digite a quantidade de kWh consumidos durante o mês: ");
			scanf("%f",&quantidade_kwh);
				printf(" ----------------------------------------------------------------------- ");
	
	printf("\n Digite o tipo (código) do consumidor de acordo com a tabela abaixo:");
		printf("\n ======================================================================= ");
			printf("\n 1- residencial, preço em reais por kWh = 0,3;");
				printf("\n 2- comercial, preço em reais por kWh = 0,5;");
					printf("\n 3- industrial, preço em reais por kWh = 0,7.");
						printf("\n ======================================================================= ");
							printf("\n Qual é o código desse consumidor? Digite ele aqui: ");
								scanf("%d",&codigo_consumidor);
									printf("\n *********************************************************************** \n");
	
	if(codigo_consumidor!=1 && codigo_consumidor!=2 && codigo_consumidor!=3){
			
	printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ");
		printf("\n ERRO: Código inválido! Esse consumidor foi desconsiderado! Tente novamente!");
			printf("\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n \n");
}
	
	else{
	
	switch(codigo_consumidor){
		case 1: 
			custo_total = quantidade_kwh * 0.3;
				printf("\n RESULTADO INDIVIDUAL: \n");
					printf(" O custo total para esse consumidor é de: R$%.2f.", custo_total);
						printf(" \n \n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
						
		acumulador_1 = acumulador_1 + quantidade_kwh;
		
		contador_1++;
		
break;
		
		case 2: 
			custo_total = quantidade_kwh * 0.5;
				printf("\n RESULTADO INDIVIDUAL: \n");
					printf("\n O custo total para esse consumidor é de: R$%.2f.", custo_total);
						printf(" \n \n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
		
		acumulador_2 = acumulador_2 + quantidade_kwh;
							
		contador_2++;
		
break;

		case 3: 
			custo_total = quantidade_kwh * 0.7;	
				printf("\n RESULTADO INDIVIDUAL: \n");
					printf("\n O custo total para esse consumidor é de: R$%.2f.", custo_total);
						printf(" \n \n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
		
		acumulador_3 = acumulador_3 + quantidade_kwh;
	
break;	

}
	
	contador++;
	
}
}
	
	}while (numero_consumidor!=0);

	media_1e2 = (acumulador_1 + acumulador_2) / 2;
	
	media_1 = acumulador_1 / contador_1;
	
	media_2 = acumulador_2 / contador_2;
	
	acumulador_consumo = acumulador_1 + acumulador_2 + acumulador_3;

	printf("\n *********************************************************************** ");
		printf("\n *********************************************************************** ");
			printf("\n \n RESULTADO GERAL: \n");
				printf("\n O total de consumo para:");
					printf("\n - o tipo residencial (1) foi de: %.3fkWh;", acumulador_1);
						printf("\n - o tipo comercial (2) foi de: %.3fkWh;", acumulador_2);
							printf("\n - o tipo industrial (3) foi de: %.3fkWh;", acumulador_3);
								printf("\n - os três tipos de consumidor foi de: %.3fkWh.", acumulador_consumo);
									
	printf("\n\n A média de consumo: ");
		printf("\n - do tipo residencial (1) foi de: %.3fkWh;", media_1);
			printf("\n - do tipo comercial (2) foi de: %.3fkWh;", media_2);
				printf("\n - entre os dois tipos residencial (1) e comercial (2) foi de: %.3fkWh.", media_1e2);

	printf("\n \n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
}
