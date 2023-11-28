#include <stdio.h>
#include <locale.h>

main(){
	
	int opcao;
		float nota1, nota2, nota3, aritmetica, ponderada;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n CÁLCULO DE MÉDIA ARITMÉTICA OU PONDERADA DE 3 NOTAS: ");
		printf("\n");
			printf("\n *********************************************************************** \n");
	
	printf("\n Digite a nota 1 e aperte enter: \t");
		scanf("%f", &nota1);
		
	printf("\n Digite a nota 2 e aperte enter: \t");
		scanf("%f", &nota2);
	
	printf("\n Digite a nota 3 e aperte enter: \t");
		scanf("%f", &nota3);

	printf("\n *********************************************************************** \n");
		printf("\n ESCOLHA UMA OPÇÃO: \n");
			printf("\n 1 - para média aritmética; \n");
				printf("\n 2 - para média ponderada com pesos 3, 3 e 4. \n");
					printf("\n Digite a opção escolhida e aperte enter: \t");
						scanf("%d", &opcao);
	
switch(opcao){
	
	case 1:			
	aritmetica = (nota1 + nota2 + nota3) / 3;
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n A média aritmética das notas digitadas é: %.2f.", aritmetica);
	break;

	case 2:
	ponderada = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / (3 + 3 + 4);
	
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n A média ponderada das notas digitadas é: %.2f.", ponderada);
	break;
	
	default:
	printf("\n *********************************************************************** \n");
		printf("\n RESULTADO: \n");
			printf("\n O caractere digitado não corresponde a nenhuma opção. \n");
}

	printf("\n");
		printf("\n *********************************************************************** \n");
			printf("\n Fim do programa. \n");
				printf("\n *********************************************************************** \n");
}
