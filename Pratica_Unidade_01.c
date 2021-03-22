// Código da prática da unidade 1 de Introdução a Programação (Nivelamento)

#include <stdio.h>

main() {
	int codigo;
	float precomp;
	
	printf("\nENTRADA DE DADOS DO PRODUTO\n");
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigo);
	printf("Digite o preco de compra: R$ ");
	scanf("%f", &precomp);

	printf("\nLISTA DOS DADOS DO PRODUTO");

	printf("\n+-----------------------------------------------------------------------+");
	printf("\n| Codigo | Preco Compra | Imposto | Lucro | Preco Venda | Classificacao |");
	printf("\n+-----------------------------------------------------------------------+");
	printf("\n| %6d | %12.2f | %7.2f | %5.2f | %11.2f | ************* |", codigo, precomp, 0.00, 0.00, 0.00);
	printf("\n+-----------------------------------------------------------------------+");
	
	getch();
}
