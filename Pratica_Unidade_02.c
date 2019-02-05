// Código da prática da unidade 2 de Introdução a Programação (Nivelamento)

#include <stdio.h>

main() {
	int codigo;
	float precomp, imp, lucro, prevend;
	
	printf("\nENTRADA DE DADOS DO PRODUTO\n");
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigo);
	printf("Digite o preco de compra: R$ ");
	scanf("%f", &precomp);

	imp = precomp * 35 / 100;
	lucro = precomp * 47 / 100;
	prevend = precomp + imp + lucro;

	printf("\nLISTA DOS DADOS DO PRODUTO");

	printf("\n+-----------------------------------------------------------------------+");
	printf("\n| Codigo | Preco Compra | Imposto | Lucro | Preco Venda | Classificacao |");
	printf("\n+-----------------------------------------------------------------------+");
	printf("\n| %6d | %12.2f | %7.2f | %5.2f | %11.2f | ************* |", codigo, precomp, imp, lucro, prevend);
	printf("\n+-----------------------------------------------------------------------+");

	getch();
}
