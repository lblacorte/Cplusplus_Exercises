/*
f) Faça um programa que receba dois números X e Y, sendo X < Y. Calcule e mostre:

• a soma dos números pares desse intervalo de números, incluindo os números digitados;
• a multiplicação dos números ímpares desse intervalo, incluindo os digitados;
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	int contador=0, X=0, Y=0, soma_pares=0, multiplicacao_impares=1;
		char tentar_novamente;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(X>=Y || contador==0){	
	
	system("cls");
	
	printf("\n FAZER ALGUNS CÁLCULOS COM UMA DETERMINADA SEQUÊNCIA DE NÚMEROS:");
		printf("\n \n *********************************************************************** \n");

	contador++;
	
	printf("\n Digite o número que inicia a sequência (o menor, o X): ");
		scanf("%d", &X);
			printf("\n ----------------------------------------------------------------------- \n");
	
	printf("\n Digite o número que finaliza a sequência (o maior, o Y): ");
		scanf("%d", &Y);
		
	if(X>=Y){
		
		printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ");
			printf("\n \n ERRO: X deve ser menor que Y, não maior, nem igual! Números desconsiderados! Tente novamente!");
				printf("\n \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
				
		printf("\n \n DIGITE QUALQUER CARACTERE E APERTE ENTER PARA TENTAR NOVAMENTE: ");
			scanf(" %c", &tentar_novamente);
}
	
	else{
		
	do{
		
	if(X%2==0){
	
	soma_pares = soma_pares + X;
}
	
	else{
		
	multiplicacao_impares = multiplicacao_impares * X;
}
	
	X++;
	
}	while (X<=Y);

	X=0;
	
}	
}

	printf("\n\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf(" - A soma dos números pares desse intervalo de números, incluindo os números digitados, é de: %d;", soma_pares);
				printf("\n - A multiplicação dos números ímpares desse intervalo, incluindo os digitados, é de: %d.", multiplicacao_impares);
					
	printf("\n\n *********************************************************************** \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
				
}
