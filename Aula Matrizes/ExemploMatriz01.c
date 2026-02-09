#include <stdio.h>
int main (void)
{
	int matriz[4][4];
	int i, j;
	
	for (i=0; i<4; i++) // fixei a linha 
	{
		for (j=0; j<4;j++) // navegar nas colunas
		{
			printf ("Informe o valor para armazenar na matriz: ");
			scanf ("%d", &matriz[i][j]);
		}
	}
	// Mostrar os elementos pares armazenados na matriz. SEMPRE que se precisar analisar TODA a matriz => for linha + for coluna
	for (i=0; i<4; i++) // fixando a linha
	{
		for (j=0; j<4;j++) // navegando nas colunas 
		{
			if (matriz[i][j] % 2 == 0)
			{
				printf (" Valor par armazenado %d na linha %d e na coluna %d \n", matriz[i][j], i, j);
			}
		}
	}
	
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
