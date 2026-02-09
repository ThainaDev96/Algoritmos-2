#include <stdio.h>
int main (void)
{
	int matriz[4][4];
	int i, j, soma = 0;
	
	for (i=0; i<4; i++) // fixei a linha 
	{
		for (j=0; j<4;j++) // navegar nas colunas
		{
			printf ("Informe o valor para armazenar na matriz: ");
			scanf ("%d", &matriz[i][j]);
		}
	}
	
	// Mostrar a soma dos elementos impares armazenados na ultima linha.
	for (i=0; i< 4;i++)
	{
		if (matriz[3][i] %2 != 0)
		{
			soma = soma + matriz[3][i];
		}
		
	}
	printf (" A soma dos elementos impares armazenados na ultima linha da matriz: %d \n", soma);
	
	printf (" Mostrando todos os valores armazenados na matriz: \n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4;j++)
		{
			printf (" %d ", matriz[i][j]);
		}
		printf ("\n");
	}
	
}
