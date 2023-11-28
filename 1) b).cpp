/*
b) Numa universidade cada aluno possui os seguintes dados:
- Renda pessoal;
- Renda familiar;
- Total gasto com alimentação;
- Total gasto com outras despesas.

Criar um algoritmo que imprima a porcentagem dos alunos que gasta acima de R$ 200,00 com outras
despesas, o número de alunos com renda pessoal maior que renda familiar e a porcentagem gasta com
alimentação e outras despesas em relação às rendas pessoal e familiar.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	int contador=1, contador_maiorpessoal=0;
		float pessoal, familiar, alimentacao, outras, porcentagem_maisq200, porcentagem_gastos, contador_maisq200=0, contador_alunos=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n PESQUISA EM UMA UNIVERSIDADE: ");
		printf("\n \n *********************************************************************** \n");
	
	do{
	
	printf("\n DADOS DO ALUNO %d:", contador);
		printf(" \n ----------------------------------------------------------------------- ");
	
	if(contador==1){
		
	printf("\n Digite a renda pessoal: ");
		scanf("%f", &pessoal);
}

	else{
	
	printf("\n Digite a renda pessoal (digite \"-1\" sem as aspas para terminar a pesquisa): ");
		scanf("%f",&pessoal);
}
	
	if(pessoal!=-1){
		
	printf(" ----------------------------------------------------------------------- ");
		printf("\n Digite a renda familiar: ");
			scanf("%f",&familiar);
				printf(" ----------------------------------------------------------------------- ");
	
	printf("\n Digite o total gasto com alimentação: ");
		scanf("%f",&alimentacao);
			printf(" ----------------------------------------------------------------------- ");
	
	printf("\n Digite o total gasto com outras despesas: ");
		scanf("%f",&outras);
			printf(" *********************************************************************** \n");
	
	if(outras>200){
		contador_maisq200++;
}
	
	if(pessoal>familiar){
		contador_maiorpessoal++;
}

	contador++;
	contador_alunos++;
	
	porcentagem_gastos = 100 * (alimentacao + outras) / (pessoal + familiar);
	
	printf("\n RESULTADO PESSOAL: \n");
		printf(" A porcentagem gasta com alimentação e outras despesas em relação às rendas pessoal e familiar é de: %.3f%%.", porcentagem_gastos);
			printf(" \n \n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
}
	
	}while (pessoal!=-1);

	porcentagem_maisq200 = 100 * contador_maisq200 / contador_alunos;

	printf("\n *********************************************************************** ");
		printf("\n *********************************************************************** ");
			printf("\n \n RESULTADO GERAL: \n");
				printf("\n A porcentagem dos alunos que gasta acima de R$ 200,00 com outras despesas é de: %.3f%%.", porcentagem_maisq200);
					printf("\n O número de alunos com renda pessoal maior que renda familiar é de: %d.", contador_maiorpessoal);

	printf("\n \n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
		printf("\n FIM DO PROGRAMA. \n");
			printf("\n *********************************************************************** \n");
}
