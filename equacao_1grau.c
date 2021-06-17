#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A;
	int B;
	int C;
	int x;
	int soma;
	int subt;
	
	printf("Seja bem-vindo ao software que ira resolver equacoes de primeiro grau.\n");
	printf("digite o valor A: \n");
	scanf("%d", &A);
	printf("Digite o valor B: \n");
	scanf("%d", &B);
	printf("Digite o valor C: \n");
	scanf("%d", &C);

	subt = C - B;
	x = subt / A;

	printf("Resultado: x = %d \n", x);

	return 0;
}