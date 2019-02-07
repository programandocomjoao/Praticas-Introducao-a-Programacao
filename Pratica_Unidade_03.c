// Código da prática da unidade 3 de Introdução a Programação (Nivelamento)

#include <stdio.h>
#define SAL_MIN 998.00

main() {
	int codigo, classificacao;
	float precomp, imp, lucro, prevend;
	
	printf("\nENTRADA DE DADOS DO PRODUTO\n");
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigo);
	printf("Digite o preco de compra: R$ ");
	scanf("%f", &precomp);

	imp = precomp * 35 / 100;
	lucro = precomp * 47 / 100;
	prevend = precomp + imp + lucro;

	if (prevend < SAL_MIN * 0.05)
		classificacao = 1;
	else if ((prevend >= SAL_MIN * 0.05) && (prevend < SAL_MIN * 0.15))
		classificacao = 2;
	else
		classificacao = 3;

	printf("\nLISTA DOS DADOS DO PRODUTO");

	printf("\n+-----------------------------------------------------------------------+");
	printf("\n| Codigo | Preco Compra | Imposto | Lucro | Preco Venda | Classificacao |");
	printf("\n+-----------------------------------------------------------------------+");

	switch (classificacao) {
		case 1: printf("\n| %6d | %12.2f | %7.2f | %5.2f | %11.2f | %-13s |", codigo, precomp, imp, lucro, prevend, "Barato"); break;
		case 2: printf("\n| %6d | %12.2f | %7.2f | %5.2f | %11.2f | %-13s |", codigo, precomp, imp, lucro, prevend, "Normal"); break;
		case 3: printf("\n| %6d | %12.2f | %7.2f | %5.2f | %11.2f | %-13s |", codigo, precomp, imp, lucro, prevend, "Caro");
	}

	printf("\n+-----------------------------------------------------------------------+");

	getch();
}
